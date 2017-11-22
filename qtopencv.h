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

#ifndef QTOPENCV_H
#define QTOPENCV_H

#include <QWidget>
#include <QTimer>
#include <QImage>
#include <QPixmap>

#include "imageprocessing.h"

class qtopencv : public QWidget
{
    Q_OBJECT

public:
    qtopencv(QWidget *parent = 0);
    ~qtopencv();

    inline QImage* getImage() const {
        return const_cast<QImage *>(&qimage);
    }

    inline QImage getImageData() const {
        return qimage;
    }

    inline void closeCamera() {
        if(timer->isActive())
            stop();
        ip->closeCapture();
    }

public slots:
    inline void setWidth( int w ) {
        if(w>0)
            width = w;
    }

    inline void setHeight( int h ) {
        if(h>0)
            height = h;
    }

    inline void start() {
        captureStarted();
    }

    inline void stop() {
        captureStopped();
    }

signals:
    void newImg();

private:
    Image_Processing    *ip;
    QTimer              *timer;
    cv::Mat              ocv_image;
    QImage	         qimage;
    int                  width;
    int                  height;

private slots:
    void captureStarted();
    void captureStopped();
    void ocv2qt();
};

#endif // QTOPENCV_H
