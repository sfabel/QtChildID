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

#include "Image_Processing.h"

Image_Processing::Image_Processing()
{
    if(initAttributes() < 0)
        cerr << "\n\n\nError initializing OpenCV backend. Aborting program" << endl;
}

Image_Processing::~Image_Processing() { }


int Image_Processing::initAttributes()
{
    if(!capture.open(0)) {
        cerr << "ERROR: Could not open camera for capture!\n";
        return -1;
    } else {
        capture >> cframe;

        // width and height of frames in the video stream
        frame_size = cframe.size();

        // brightness, contrast, saturation and hue of image
        brightness	= capture.get( CV_CAP_PROP_BRIGHTNESS );
        contrast 	= capture.get( CV_CAP_PROP_CONTRAST );
        saturation	= capture.get( CV_CAP_PROP_SATURATION );
        hue 	    = capture.get( CV_CAP_PROP_HUE );

//        cout << "Input Frame:\n\n" << frame_size.width
//                << "x" << frame_size.height << endl;
    }

    return 0;
}


int Image_Processing::captureFrame()
{
    capture >> cframe; //cframe is a Mat type

    // necessary for conversion to QImage later. We need an alpha
    // channel.
    split(cframe, channels);
    channels.push_back(Mat(cframe.size(), CV_8UC1, Scalar(255)));
    merge(channels, cframe);

    dframe = cframe;

    return 0;
}
