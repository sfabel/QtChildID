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

#include <QtGui/QApplication>
#include "keikimwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QCoreApplication::setOrganizationName("GL Hawaii F&AM");
    QCoreApplication::setOrganizationDomain("hawaiifreemason.org");
    QCoreApplication::setApplicationName("Keiki ID");

    KeikiMWindow w;
    w.show();

    return a.exec();
}
