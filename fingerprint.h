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

#ifndef FINGERPRINT_H
#define FINGERPRINT_H

#include <QImage>
#include <QString>
#include <QMessageBox>

#ifdef DEBUG
#include <QDebug>
#endif

extern "C" {
#include <fprint.h>
#include <unistd.h>
}

QImage readFinger();
struct fp_img *enroll(struct fp_dev *dev);
struct fp_dscv_dev *discover_device(struct fp_dscv_dev **discovered_devs);

#endif // FINGERPRINT_H
