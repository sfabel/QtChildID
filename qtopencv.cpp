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

#include "qtopencv.h"

/** qtopencv()
 * \brief qtopencv constructor.
 *
 * This is a QWidget derived class representing the interface to the
 * OpenCV world for a Qt program. The goal is to separate OpenCV
 * functionality from the Qt portion of the program and this class
 * glues both worlds together.
 *
 * @param parent *QWidget pointer to parent of the qtopencv widget
 * @see resize()
 */
qtopencv::qtopencv(QWidget *parent)
    : QWidget(parent)
{
    ip = new Image_Processing();
    ip->captureFrame();

    ocv_image.create( ip->getSize(), ip->getType() );

    width  = ip->getSize().width;
    height = ip->getSize().height;
}

/** ~qtopencv()
 * \brief destructor; just deletes the ImageProcessing object before
 * cleaning up.
 *
 */
qtopencv::~qtopencv()
{
    delete ip;
}


/** ocv2qt()
 * \brief reads current frame and converts it to a QImage.
 *
 * This method checks which mode is enabled and sets the mode variable
 * correspondingly. The current frame is "copied" using cvCopy instead
 * of cvClone which just sets the data_ptr correctly and is thus
 * faster.
 *
 * The QImage is then created with the data_ptr as parameter so no
 * actual data is copied. This conversion is thus really fast and able
 * to convert frames at real-time from OpenCV IplImage to QImage.
 *
 */
void qtopencv::ocv2qt()
{

    ip->captureFrame();
    ip->getFrame().copyTo( ocv_image );

    // point to the image data stored in the IplImage*
    const unsigned char * data = ocv_image.data;

    // read other parameters in local variables
    int ocvwidth 	= ocv_image.size().width;
    int ocvheight	= ocv_image.size().height;
    int bytesPerLine 	= ocv_image.step;

    qimage = QImage( data, ocvwidth, ocvheight, bytesPerLine, QImage::Format_RGB32 );


    qimage = qimage.scaled( 320, 240, Qt::KeepAspectRatio );

    //ui.imageframe->setPixmap(pixmap->fromImage(qimage, 0));

    emit newImg();

    return;
}

void qtopencv::captureStarted()
{
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(ocv2qt()));
    timer->start(5);

}


void qtopencv::captureStopped()
{
    if(timer->isActive())
        timer->stop();
}
