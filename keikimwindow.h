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

#ifndef KEIKIMWINDOW_H
#define KEIKIMWINDOW_H

#include <QMainWindow>
#include <QPrinter>
#include <QPrintDialog>
#include <QPainter>
#include <QImage>
#include <QPixmap>
#include <QSettings>
#include <QDate>
#include <QMessageBox>
#include <QTextStream>

#include "qtopencv.h"

extern QImage readFinger();

namespace Ui {
    class KeikiMWindow;
}

class KeikiMWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit KeikiMWindow(QWidget *parent = 0);
    ~KeikiMWindow();

private slots:
    void updateImage();
    void doLThumb();
    void doRThumb();
    void saveImage();
    void clearAll();
    void print();
    void clearTotalCounter();
    void clearSessionCounter();
    void showAboutDlg();
    void showTutorial();

    inline void createPDF(bool new_val) {
        print_pdf = new_val;
    }

    inline void toggleTemplate(bool new_val) {
        do_template = new_val;
    }

private:
    Ui::KeikiMWindow *ui;
    qtopencv         *ocv;
    QPixmap          *pixmap;
    QPixmap          *lPrintPixmap;
    QPixmap          *rPrintPixmap;
    QImage            theImage;
    QImage            lPrint;
    QImage            rPrint;
    unsigned int      sessionCounter;
    unsigned int      totalCounter;
    bool              cam_active;
    bool              do_template;
    bool              print_pdf;
};

#endif // KEIKIMWINDOW_H
