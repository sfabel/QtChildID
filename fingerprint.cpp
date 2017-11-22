/////////////////////////////////////////////////////////////////////////////////////
// This file is part of QtChildID.                                                  //
//                                                                                 //
//        QtChildID is free software: you can redistribute it and/or modify         //
//        it under the terms of the GNU General Public License as published by     //
//        the Free Software Foundation, either version 3 of the License, or        //
//        (at your option) any later version.                                      //
//                                                                                 //
//        QtChildID is distributed in the hope that it will be useful,              //
//        but WITHOUT ANY WARRANTY; without even the implied warranty of           //
//        MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the            //
//        GNU General Public License for more details.                             //
//                                                                                 //
//        You should have received a copy of the GNU General Public License        //
//        along with QtChildID.  If not, see <http://www.gnu.org/licenses/>.        //
//                                                                                 //
// QtChildID - Copyright 2010, 2011                                                 //
// written by Stephan Fabel <stephan.fabel+QtChildID@gmail.com>                     //
//                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////

#include "fingerprint.h"

QImage readFinger()
{
    QMessageBox mbox;
    QImage empty;

    int r = 1;
    struct fp_dscv_dev *ddev = NULL;
    struct fp_dscv_dev **discovered_devs = NULL;
    struct fp_dev *dev = NULL;
    struct fp_img *fp_img = NULL;
    struct fp_img *bin_img = NULL;

    r = fp_init();

#ifdef DEBUG
    if (r < 0)
        qDebug("Failed to initialize libfprint\n");
    fp_set_debug(3);
#else
    if(r < 0) {
        mbox.setText("Failed to initialize libfprint");
        mbox.exec();
        return empty;
    }
#endif

    discovered_devs = fp_discover_devs();

    if (!discovered_devs) {
#ifdef DEBUG
        qDebug("Could not discover devices\n");
#else
        mbox.setText("Could not discover devices");
        mbox.exec();
        return empty;
#endif
    }

    ddev = discover_device(discovered_devs);

    if (!ddev) {
#ifdef DEBUG
        qDebug("No devices detected.\n");
#else
        mbox.setText("No devices detected.");
        mbox.exec();
        return empty;
#endif
    }

    dev = fp_dev_open(ddev);
    fp_dscv_devs_free(discovered_devs);

    if (!dev) {
#ifdef DEBUG
        qDebug("Could not open device.\n");
#else
        mbox.setText("Could not open device.");
        mbox.exec();
        return empty;
#endif
    }

#ifdef DEBUG
    qDebug("Opened device. It's now time to enroll your finger.\n\n");
#endif

    fp_img = enroll(dev);

    if(fp_img == NULL) {
#ifdef DEBUG
        qDebug("Could not read image from fingerprint reader!");
#endif
        mbox.setText("Could not read image from fingerprint reader!");
        mbox.exec();
        return empty;
    }
    fp_img_standardize( fp_img );
    bin_img = fp_img_binarize( fp_img );

    char fname[] = "tmp.pgm";
    fp_img_save_to_file(bin_img,fname);
    QImage fingerprint(fname);

    fp_img_free( fp_img );
    fp_img_free( bin_img );

    fp_dev_close(dev);
    fp_exit();

    return fingerprint;
}

struct fp_dscv_dev *discover_device(struct fp_dscv_dev **discovered_devs)
{
    struct fp_dscv_dev *ddev = discovered_devs[0];
    struct fp_driver *drv;
    if (!ddev)
        return NULL;

    drv = fp_dscv_dev_get_driver(ddev);
#ifdef DEBUG
    qDebug("Found device claimed by %s driver\n", fp_driver_get_full_name(drv));
#endif
    return ddev;
}

struct fp_img *enroll(struct fp_dev *dev) {
    QString message;
    struct fp_print_data *enrolled_print = NULL;
    struct fp_img *img = NULL;
    int r;

#ifdef DEBUG
    qDebug("You will need to successfully scan your finger %d times to "
           "complete the process.\n", fp_dev_get_nr_enroll_stages(dev));
#endif
    do {


        sleep(1);
#ifdef DEBUG
        qDebug("\nScan your finger now.\n");
#endif
        r = fp_enroll_finger_img(dev, &enrolled_print, &img);

        if (r < 0) {
#ifdef DEBUG
            qDebug("Enroll failed with error %d\n", r);
#endif
            return NULL;
        }

        switch (r) {
        case FP_ENROLL_COMPLETE:
            message = "Enroll complete!";
            break;
        case FP_ENROLL_FAIL:
            message = "Enroll failed, something wen't wrong :(";
            return NULL;
        case FP_ENROLL_PASS:
            message = "Enroll stage passed. Yay!";
            break;
        case FP_ENROLL_RETRY:
            message = "Didn't quite catch that. Please try again.";
            break;
        case FP_ENROLL_RETRY_TOO_SHORT:
            message = "Your swipe was too short, please try again.";
            break;
        case FP_ENROLL_RETRY_CENTER_FINGER:
            message = "Didn't catch that, please center your finger on the sensor and try again.";
            break;
        case FP_ENROLL_RETRY_REMOVE_FINGER:
            message = "Scan failed, please remove your finger and then try again.";
            break;
        }

        if(r!=FP_ENROLL_COMPLETE)
            QMessageBox::critical(NULL, "Keiki ID", message, QMessageBox::Ok );

    } while (r != FP_ENROLL_COMPLETE);

    if (!enrolled_print) {
#ifdef DEBUG
        qDebug("Enroll complete but no print?\n");
#endif
        return NULL;
    }
#ifdef DEBUG
    qDebug("Enrollment completed!\n\n");
#endif

    if (img)
        return img;
    else
        return NULL;
}
