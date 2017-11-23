/////////////////////////////////////////////////////////////////////////////////////
// This file is part of QtChildID.                                                 //
//                                                                                 //
//        QtChildID is free software: you can redistribute it and/or modify        //
//        it under the terms of the GNU General Public License as published by     //
//        the Free Software Foundation, either version 3 of the License, or        //
//        (at your option) any later version.                                      //
//                                                                                 //
//        QtChildID is distributed in the hope that it will be useful,             //
//        but WITHOUT ANY WARRANTY; without even the implied warranty of           //
//        MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the            //
//        GNU General Public License for more details.                             //
//                                                                                 //
//        You should have received a copy of the GNU General Public License        //
//        along with QtChildID.  If not, see <http://www.gnu.org/licenses/>.       //
//                                                                                 //
// QtChildID - Copyright 2010, 2011                                                //
// written by Stephan Fabel <stephan.fabel+QtChildID@gmail.com>                    //
//                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////

#include "keikimwindow.h"
#include "ui_keikimwindow.h"
#include <poppler/qt4/poppler-qt4.h>

#include <QFile>
#include <QDate>
#include <QMessageBox>

#ifdef DEBUG
#include <QDebug>
#endif

KeikiMWindow::KeikiMWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::KeikiMWindow)
{
    ui->setupUi(this);

    QSettings settings;
    sessionCounter = 0;
    totalCounter = settings.value("totalcounter",0).toUInt();
    ui->label_total->setText(QString("%1").arg(totalCounter));

    ui->dateEdit->setDate(QDate::currentDate());

    ocv          = new qtopencv();
    pixmap       = new QPixmap();
    lPrintPixmap = new QPixmap();
    rPrintPixmap = new QPixmap();

    cam_active  = false;
    do_template = ui->actionUse_Template_File->isChecked();
    print_pdf   = ui->actionCreate_PDF->isChecked();

    connect(ocv,SIGNAL(newImg()),this,SLOT(updateImage()));

    connect(ui->actionQuit,SIGNAL(triggered()),qApp,SLOT(quit()));
    connect(ui->actionClear_All,SIGNAL(triggered()),this,SLOT(clearAll()));
    connect(ui->actionPrint,SIGNAL(triggered()),this,SLOT(print()));
    connect(ui->actionReset_Session_Couter,SIGNAL(triggered()),this,SLOT(clearSessionCounter()));
    connect(ui->actionReset_Total_Counter,SIGNAL(triggered()),this,SLOT(clearTotalCounter()));
    connect(ui->actionUse_Template_File,SIGNAL(toggled(bool)),this,SLOT(toggleTemplate(bool)));
    connect(ui->actionCreate_PDF,SIGNAL(toggled(bool)),this,SLOT(createPDF(bool)));
    connect(ui->actionTutorial,SIGNAL(triggered()),this,SLOT(showTutorial()));
    connect(ui->actionAbout_Qt,SIGNAL(triggered()),qApp,SLOT(aboutQt()));
    connect(ui->actionAbout,SIGNAL(triggered()),this,SLOT(showAboutDlg()));

    connect(ui->btn_savePhoto,SIGNAL(clicked()),this,SLOT(saveImage()));
    connect(ui->btn_LThumb,SIGNAL(clicked()),this,SLOT(doLThumb()));
    connect(ui->btn_RThumb,SIGNAL(clicked()),this,SLOT(doRThumb()));
    connect(ui->btn_clear,SIGNAL(clicked()),this,SLOT(clearAll()));
    connect(ui->btn_Print,SIGNAL(clicked()),this,SLOT(print()));
    connect(ui->btn_Quit,SIGNAL(clicked()),qApp,SLOT(quit()));
}

KeikiMWindow::~KeikiMWindow()
{
    // save counter
    QSettings settings;
    settings.setValue("totalcounter",totalCounter);

    // delete temporary files
    QFile tmpfile;

    tmpfile.setFileName("tmp.pgm");
    if(tmpfile.exists())
        tmpfile.remove();

    tmpfile.setFileName("print.pdf");
    if(tmpfile.exists())
        tmpfile.remove();

    delete ui;
}

void KeikiMWindow::updateImage()
{
    QImage img = ocv->getImageData();
    img = img.scaledToWidth(200);
    ui->imgframe->setPixmap(pixmap->fromImage(img, 0));
}

void KeikiMWindow::saveImage()
{

    if(cam_active) {
        theImage = ocv->getImageData();
        ocv->stop();
        ui->btn_savePhoto->setText("Activate WebCam");
        cam_active = false;
    }
    else {
        ocv->start();
        ui->btn_savePhoto->setText("Save Image");
        cam_active = true;
    }
}

void KeikiMWindow::doLThumb()
{
    lPrint = readFinger();

    lPrint = lPrint.scaled(100,150,Qt::IgnoreAspectRatio);
    ui->lthumbframe->setPixmap(lPrintPixmap->fromImage(lPrint, 0));
}

void KeikiMWindow::doRThumb()
{
    rPrint = readFinger();

    rPrint = rPrint.scaled(100,150,Qt::IgnoreAspectRatio);
    ui->rthumbframe->setPixmap(rPrintPixmap->fromImage(rPrint, 0));
}

void KeikiMWindow::clearAll()
{
    ocv->stop();
    ui->btn_savePhoto->setText("Activate WebCam");
    cam_active = false;

    QPixmap whitefill;
    whitefill.fill(Qt::white);

    ui->imgframe->setPixmap(whitefill);
    ui->lthumbframe->setPixmap(whitefill);
    ui->rthumbframe->setPixmap(whitefill);

    ui->dateEdit->setDate(QDate::currentDate());

    ui->lineEdit_FirstName->clear();
    ui->lineEdit_LastName->clear();
    ui->lineEdit_Guardian->clear();
    ui->lineEdit_Address2->clear();
    ui->lineEdit_Dentist->clear();
    ui->lineEdit_Doctors->clear();
    ui->lineEdit_Eyes->clear();
    ui->lineEdit_Hair->clear();
    ui->lineEdit_MiddleName->clear();
    ui->lineEdit_Nickname->clear();
    ui->lineEdit_School->clear();
    ui->lineEdit_SSN->clear();
    ui->lineEdit_Street->clear();

    ui->radioMale->setChecked(false);
    ui->radioFemale->setChecked(false);

    ui->comboBox_Race->setCurrentIndex(-1);

    ui->spinBox_ft->clear();
    ui->spinBox_in->clear();
    ui->spinBox_lbs->clear();
    ui->spinBox_oz->clear();
}

void KeikiMWindow::print()
{
    QPrinter printer;
    unsigned int scale = 4;
    printer.setResolution(scale*72);

    if(print_pdf)
        printer.setOutputFormat(QPrinter::PdfFormat);
    else
        printer.setOutputFormat(QPrinter::NativeFormat);

    printer.setOrientation(QPrinter::Landscape);
    printer.setPaperSize(QPrinter::Letter);
    printer.setPageSize(QPrinter::Letter);
    printer.setPageMargins(0,0,0,0,QPrinter::Millimeter);

    QPrintDialog pdialog(&printer,this);
    if(pdialog.exec() == QDialog::Accepted) {
        totalCounter++;
        sessionCounter++;
        ui->label_session->setText(QString("%1").arg(sessionCounter));
        ui->label_total->setText(QString("%1").arg(totalCounter));

        // create page here and print it
        QPainter painter(&printer);

        // either use template
        if(do_template) {

            int dpi = printer.resolution()*2;

            QFile f(":/res/id_template.pdf");
            f.open(QIODevice::ReadOnly);
            Poppler::Document* template_id = Poppler::Document::loadFromData(f.readAll());
            f.close();

            template_id->setRenderHint(Poppler::Document::TextAntialiasing, true);
            template_id->setRenderHint(Poppler::Document::Antialiasing, true);
            template_id->setRenderHint(Poppler::Document::TextHinting, true);;

            // create an image with the dpi of the printer
            QImage template_img = template_id->page(0)->renderToImage(dpi,dpi,0,0);

            QSize imgSize = QSize(template_img.width()/2,
                                  template_img.height()/2
                                  );

            // draw that image onto the painter
            painter.drawImage(0,0,template_img.scaled(imgSize,
                                                      Qt::KeepAspectRatioByExpanding,
                                                      Qt::SmoothTransformation
                                                      ));
        }
        else {
            QMessageBox::critical(this,
                                  tr("Not supported (yet)!"),
                                  tr("This version of QtChildID requires the usage\n"
                                     "of a template. Please check \"Use Template\"\n"
                                     "in the Extras Menu."),
                                  QMessageBox::Ok);
            return;
        }

        // fill out values
        painter.setFont(QFont("Courier New",12));

        painter.drawText(QPoint(scale*700,scale*45),QDate::currentDate().toString(Qt::DefaultLocaleShortDate));

        // big id center
        unsigned int bform_c1_x       = 330;
        unsigned int bform_r1_y       = 80;
        unsigned int bform_row_offset = 22;
        unsigned int bform_col_offset = 275;
        unsigned int line             = 0;

        painter.drawText(QPoint(scale*bform_c1_x, scale * (bform_r1_y +   line   * bform_row_offset)),
                         ui->lineEdit_FirstName->text());
        painter.drawText(QPoint(scale*(bform_c1_x + bform_col_offset), scale * (bform_r1_y + (line) * bform_row_offset)),
                         ui->lineEdit_MiddleName->text());

        painter.drawText(QPoint(scale*bform_c1_x, scale * (bform_r1_y + (++line) * bform_row_offset)),
                         ui->lineEdit_LastName->text());
        painter.drawText(QPoint(scale*(bform_c1_x + bform_col_offset), scale * (bform_r1_y + (line) * bform_row_offset)),
                         ui->lineEdit_Nickname->text());

        painter.drawText(QPoint(scale*bform_c1_x, scale * (bform_r1_y + (++line) * bform_row_offset)),
                         ui->lineEdit_Street->text());

        painter.drawText(QPoint(scale*bform_c1_x, scale * (bform_r1_y + (++line) * bform_row_offset)),
                         ui->lineEdit_Address2->text());

        painter.drawText(QPoint(scale*bform_c1_x, scale * (bform_r1_y + (++line) * bform_row_offset)),
                         ui->lineEdit_Guardian->text());

        painter.drawText(QPoint(scale*bform_c1_x, scale * (bform_r1_y + (++line) * bform_row_offset)),
                         ui->lineEdit_School->text());

        painter.drawText(QPoint(scale*bform_c1_x, scale * (bform_r1_y + (++line) * bform_row_offset)),
                         ui->lineEdit_Doctors->text());

        painter.drawText(QPoint(scale*bform_c1_x, scale * (bform_r1_y + (++line) * bform_row_offset)),
                         ui->lineEdit_Dentist->text());

        painter.drawText(QPoint(scale*bform_c1_x, scale * (bform_r1_y + (++line) * bform_row_offset)),
                         (ui->radioFemale->isChecked() ? tr("Female") : tr("Male")));
        painter.drawText(QPoint(scale*(bform_c1_x + bform_col_offset), scale * (bform_r1_y + (line) * bform_row_offset)),
                         ui->comboBox_Race->currentText());

        painter.drawText(QPoint(scale*bform_c1_x, scale * (bform_r1_y + (++line) * bform_row_offset)),
                         (ui->spinBox_ft->value() != 0 ? QString("%1 ft %2 in").arg(ui->spinBox_ft->text()).arg(ui->spinBox_in->text()) : tr("")));
        painter.drawText(QPoint(scale*(bform_c1_x + bform_col_offset), scale * (bform_r1_y + (line) * bform_row_offset)),
                         (ui->spinBox_lbs->value() != 0 ? QString("%1 lbs %2 oz").arg(ui->spinBox_lbs->text()).arg(ui->spinBox_oz->text()): tr("")));

        painter.drawText(QPoint(scale*bform_c1_x, scale * (bform_r1_y + (++line) * bform_row_offset)),
                        ui->lineEdit_Eyes->text());
        painter.drawText(QPoint(scale*(bform_c1_x + bform_col_offset), scale * (bform_r1_y + (line) * bform_row_offset)),
                         ui->lineEdit_Hair->text());

        painter.drawText(QPoint(scale*bform_c1_x, scale * (bform_r1_y + (++line) * bform_row_offset)),
                         ui->dateEdit->date().toString(Qt::DefaultLocaleShortDate));
        painter.drawText(QPoint(scale*(bform_c1_x + bform_col_offset), scale * (bform_r1_y + (line) * bform_row_offset)),
                         ui->lineEdit_SSN->text());

        // small ids
        QString name;
        QTextStream n(&name);
        n << ui->lineEdit_FirstName->text()  << " "
          << ui->lineEdit_MiddleName->text() << " "
          << ui->lineEdit_LastName->text();

        unsigned int sform_r1_y       = 530;
        unsigned int sform_r1_x       = 153;
        unsigned int sform_col_offset = 250;
        unsigned int sform_row_offset = 32;


        painter.setFont(QFont("Arial",10,QFont::DemiBold));
        painter.drawText(QPoint(scale*(70+0*sform_col_offset),scale*465),
                         QDate::currentDate().toString(Qt::DefaultLocaleShortDate));
        painter.drawText(QPoint(scale*(70+1*sform_col_offset),scale*465),
                         QDate::currentDate().toString(Qt::DefaultLocaleShortDate));
        painter.drawText(QPoint(scale*(70+2*sform_col_offset),scale*465),
                         QDate::currentDate().toString(Qt::DefaultLocaleShortDate));

        painter.setFont(QFont("Arial",7,QFont::DemiBold));

        // small id left
        painter.drawText(QPoint(scale*(sform_r1_x + 0*sform_col_offset), scale*sform_r1_y),name);
        painter.drawText(QPoint(scale*(sform_r1_x + 0*sform_col_offset), scale* (sform_r1_y + 1*sform_row_offset)),
                         ui->lineEdit_Guardian->text());


        // small id middle
        painter.drawText(QPoint(scale*(sform_r1_x + 1*sform_col_offset), scale*sform_r1_y),name);
        painter.drawText(QPoint(scale*(sform_r1_x + 1*sform_col_offset), scale* (sform_r1_y + 1*sform_row_offset)),
                         ui->lineEdit_Guardian->text());

        // small id right
        painter.drawText(QPoint(scale*(sform_r1_x + 2*sform_col_offset), scale*sform_r1_y),name);
        painter.drawText(QPoint(scale*(sform_r1_x + 2*sform_col_offset), scale* (sform_r1_y + 1*sform_row_offset)),
                         ui->lineEdit_Guardian->text());

        // the images
        if(!theImage.isNull()) {
            unsigned int sform_pic_x = 165;
            unsigned int sform_pic_y = 430;
            painter.drawImage(QPoint(scale*29,scale*65),
                              theImage.scaled(scale*197,scale*197,Qt::IgnoreAspectRatio));
            painter.drawImage(QPoint(scale*sform_pic_x,scale*sform_pic_y),
                              theImage.scaled(scale*87,scale*72,Qt::IgnoreAspectRatio));
            painter.drawImage(QPoint(scale*(sform_pic_x+sform_col_offset),scale*sform_pic_y),
                              theImage.scaled(scale*87,scale*72,Qt::IgnoreAspectRatio));
            painter.drawImage(QPoint(scale*(sform_pic_x+2*sform_col_offset),scale*sform_pic_y),
                              theImage.scaled(scale*87,scale*72,Qt::IgnoreAspectRatio));
        }


        unsigned int sform_print_y_offset   = 487;
        unsigned int sform_lprint_x_offset  = 35;
        unsigned int sform_print_col_offset = 252;
        unsigned int sform_print_width      = 55;
        unsigned int sform_print_height     = 85;
        unsigned int bform_lprint_x         = 29;
        unsigned int bform_print_y          = 265;
        unsigned int bform_print_col_offset = 108;


        if(!lPrint.isNull()) {

            painter.drawImage(QPoint(scale*bform_lprint_x,scale*bform_print_y),
                              lPrint.scaled(scale*87,scale*110,Qt::IgnoreAspectRatio));

            painter.drawImage(QPoint(scale*(0*sform_print_col_offset + sform_lprint_x_offset),
                                     scale*sform_print_y_offset),
                              lPrint.scaled(scale*sform_print_width,
                                            scale*sform_print_height,
                                            Qt::IgnoreAspectRatio));

            painter.drawImage(QPoint(scale*(1*sform_print_col_offset + sform_lprint_x_offset),
                                     scale*sform_print_y_offset),
                              lPrint.scaled(scale*sform_print_width,
                                            scale*sform_print_height,
                                            Qt::IgnoreAspectRatio));

            painter.drawImage(QPoint(scale*(2*sform_print_col_offset + sform_lprint_x_offset),
                                     scale*sform_print_y_offset),
                              lPrint.scaled(scale*sform_print_width,
                                            scale*sform_print_height,
                                            Qt::IgnoreAspectRatio));
        }

        if(!rPrint.isNull()) {

            painter.drawImage(QPoint(scale*(bform_lprint_x + bform_print_col_offset),scale*bform_print_y),
                              rPrint.scaled(scale*87,scale*110,Qt::IgnoreAspectRatio));

            painter.drawImage(QPoint(scale*(0*sform_print_col_offset + sform_lprint_x_offset + sform_print_width),
                                     scale*sform_print_y_offset),
                              rPrint.scaled(scale*sform_print_width,
                                            scale*sform_print_height,
                                            Qt::IgnoreAspectRatio));

            painter.drawImage(QPoint(scale*(1*sform_print_col_offset + sform_lprint_x_offset + sform_print_width),
                                     scale*sform_print_y_offset),
                              rPrint.scaled(scale*sform_print_width,
                                            scale*sform_print_height,
                                            Qt::IgnoreAspectRatio));

            painter.drawImage(QPoint(scale*(2*sform_print_col_offset + sform_lprint_x_offset + sform_print_width),
                                     scale*sform_print_y_offset),
                              rPrint.scaled(scale*sform_print_width,
                                            scale*sform_print_height,
                                            Qt::IgnoreAspectRatio));
        }
    }
}

void KeikiMWindow::clearTotalCounter()
{
    QSettings settings;
    settings.setValue("totalcounter",0);
    totalCounter = 0;
    ui->label_total->setText(QString("%1").arg(totalCounter));
    settings.sync();
}

void KeikiMWindow::clearSessionCounter()
{
    sessionCounter = 0;
    ui->label_session->setText(QString("%1").arg(sessionCounter));
}

void KeikiMWindow::showAboutDlg()
{
    QString aText;
    QTextStream aboutText(&aText);

    aboutText << "<B>Version 1.0, April 2011</B><BR>"
              << "Written by <A HREF=\"mailto:stephan.fabel+QtChildID@gmail.com\">"
              << "Stephan Fabel</A><BR><BR>"
              << "QtChildID is used by the Hawaiian Grand Lodge of Free "
              << "and Accepted Masons.<BR><BR>"
              << "If you are interested in using this program for your own "
              << "organization, feel free to modify the code accordingly, "
              << "as long as you give credit where credit is due. "
              << "<I>Hopefully this program will help many lost children "
              << "to be found and brought back to their families.</I><BR><BR>"
              << "This program is released under the GPL version 3.0.<BR>"
              << "See the LICENSE.txt file for details.<BR>"
              ;

    QMessageBox::about(this,tr("QtChildID"),aText);
}

void KeikiMWindow::showTutorial()
{
    QString tText;
    QTextStream tutorialText(&tText);
    tutorialText << "<B>QtChildID Tutorial</B><BR><BR>"
                 << "Usage:"
                 << "<UL>"
                 << "<LI>fill out all the form fields, but at least the ones from the first tab.<BR>"
                 << "<LI>click on \"Activate WebCam\" show a live image.<BR>"
                 << "<LI>arrange camera to get a good frontal photo of the child.<BR>"
                 << "<LI>the button text changed to \"Save Image\". Click on it to do so.<BR>"
                 << "<LI>click on the fingerprint buttons and press child's left and right<BR>"
                 << "  thumb on the fingerprint reader after it starts lighting up<BR>"
                 << "<LI>check \"Create PDF\" in the \"Extras\" Menu if the family wants to<BR>"
                 << "  take the ID as a PDF on a USB drive, else just click on \"Print\".<BR>"
                 << "<LI>if at any time you need to start over, click \"Clear All\"."
                 << "</UL>"
                 ;

    QMessageBox::information(this,tr("QtChildID"),tText);
}
