/////////////////////////////////////////////////////////////////////////////////////
// This file is part of QChildID.                                                  //
//                                                                                 //
//        QChildID is free software: you can redistribute it and/or modify         //
//        it under the terms of the GNU General Public License as published by     //
//        the Free Software Foundation, either version 3 of the License, or        //
//        (at your option) any later version.                                      //
//                                                                                 //
//        QChildID is distributed in the hope that it will be useful,              //
//        but WITHOUT ANY WARRANTY; without even the implied warranty of           //
//        MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the            //
//        GNU General Public License for more details.                             //
//                                                                                 //
//        You should have received a copy of the GNU General Public License        //
//        along with QChildID.  If not, see <http://www.gnu.org/licenses/>.        //
//                                                                                 //
// QChildID - Copyright 2010, 2011                                                 //
// written by Stephan Fabel <stephan.fabel+qchildid@gmail.com>                     //
//                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////

#ifndef IMAGE_PROCESSING_H_
#define IMAGE_PROCESSING_H_

#include <opencv/cv.h>
#include <opencv/cxcore.h>
#include <opencv/highgui.h>
using namespace cv;

#include <vector>
using std::vector;

#include <iostream>
using std::cerr;
using std::cout;
using std::endl;

class Image_Processing
{
public:
    Image_Processing();
    virtual ~Image_Processing();

    int captureFrame();

    inline Mat getFrame() {
        return dframe;
    }

    inline Size2i getSize() {
        return frame_size;
    }

    inline int getType() {
        return dframe.type();
    }

    inline void closeCapture() {
        capture.release();
    }

private:
    int initAttributes();

    VideoCapture  capture;
    double	  brightness, hue, contrast, saturation;
    Size2i        frame_size;

    Mat           dframe;
    Mat           cframe;
    vector< Mat > channels;
};

#endif /*IMAGE_PROCESSING_H_*/
