/********************************************************************************
** Form generated from reading UI file 'keikimwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEIKIMWINDOW_H
#define UI_KEIKIMWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KeikiMWindow
{
public:
    QAction *actionQuit;
    QAction *actionPrint;
    QAction *actionClear_All;
    QAction *actionUse_Template_File;
    QAction *actionReset_Session_Couter;
    QAction *actionReset_Total_Counter;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QAction *actionCreate_PDF;
    QAction *actionTutorial;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *btn_LThumb;
    QPushButton *btn_RThumb;
    QPushButton *btn_savePhoto;
    QLabel *imgframe;
    QLabel *lthumbframe;
    QLabel *rthumbframe;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit_FirstName;
    QLabel *label_2;
    QLineEdit *lineEdit_LastName;
    QLabel *label_3;
    QDateEdit *dateEdit;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioMale;
    QRadioButton *radioFemale;
    QLabel *label_6;
    QLineEdit *lineEdit_Guardian;
    QLabel *label_5;
    QHBoxLayout *weightLayout;
    QSpinBox *spinBox_lbs;
    QLabel *label_7;
    QSpinBox *spinBox_oz;
    QLabel *label_19;
    QLabel *label_51;
    QHBoxLayout *heightLayout;
    QSpinBox *spinBox_ft;
    QLabel *label_20;
    QSpinBox *spinBox_in;
    QLabel *label_21;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_Print;
    QPushButton *btn_clear;
    QPushButton *btn_Quit;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_session;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_total;
    QLabel *label_8;
    QWidget *tab_2;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_11;
    QLineEdit *lineEdit_Street;
    QLabel *label_12;
    QLineEdit *lineEdit_Address2;
    QLabel *label_25;
    QLineEdit *lineEdit_MiddleName;
    QLabel *label_26;
    QLineEdit *lineEdit_Nickname;
    QLabel *label_13;
    QLineEdit *lineEdit_School;
    QLabel *label_14;
    QLineEdit *lineEdit_Doctors;
    QLabel *label_15;
    QLineEdit *lineEdit_Dentist;
    QLabel *label_24;
    QLineEdit *lineEdit_SSN;
    QLabel *label_16;
    QComboBox *comboBox_Race;
    QLabel *label_22;
    QLineEdit *lineEdit_Eyes;
    QLabel *label_23;
    QLineEdit *lineEdit_Hair;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuExtras;
    QMenu *menuHelp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *KeikiMWindow)
    {
        if (KeikiMWindow->objectName().isEmpty())
            KeikiMWindow->setObjectName(QString::fromUtf8("KeikiMWindow"));
        KeikiMWindow->resize(806, 649);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(KeikiMWindow->sizePolicy().hasHeightForWidth());
        KeikiMWindow->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/res/freemason.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        KeikiMWindow->setWindowIcon(icon);
        KeikiMWindow->setAutoFillBackground(true);
        actionQuit = new QAction(KeikiMWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionPrint = new QAction(KeikiMWindow);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        actionClear_All = new QAction(KeikiMWindow);
        actionClear_All->setObjectName(QString::fromUtf8("actionClear_All"));
        actionUse_Template_File = new QAction(KeikiMWindow);
        actionUse_Template_File->setObjectName(QString::fromUtf8("actionUse_Template_File"));
        actionUse_Template_File->setCheckable(true);
        actionUse_Template_File->setChecked(true);
        actionReset_Session_Couter = new QAction(KeikiMWindow);
        actionReset_Session_Couter->setObjectName(QString::fromUtf8("actionReset_Session_Couter"));
        actionReset_Total_Counter = new QAction(KeikiMWindow);
        actionReset_Total_Counter->setObjectName(QString::fromUtf8("actionReset_Total_Counter"));
        actionAbout = new QAction(KeikiMWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout_Qt = new QAction(KeikiMWindow);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        actionCreate_PDF = new QAction(KeikiMWindow);
        actionCreate_PDF->setObjectName(QString::fromUtf8("actionCreate_PDF"));
        actionCreate_PDF->setCheckable(true);
        actionTutorial = new QAction(KeikiMWindow);
        actionTutorial->setObjectName(QString::fromUtf8("actionTutorial"));
        centralWidget = new QWidget(KeikiMWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setMinimumSize(QSize(800, 600));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 806, 600));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setMinimumSize(QSize(800, 600));
        tabWidget->setFocusPolicy(Qt::NoFocus);
        tabWidget->setAutoFillBackground(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        sizePolicy.setHeightForWidth(tab->sizePolicy().hasHeightForWidth());
        tab->setSizePolicy(sizePolicy);
        gridLayoutWidget = new QWidget(tab);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 260, 791, 311));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btn_LThumb = new QPushButton(gridLayoutWidget);
        btn_LThumb->setObjectName(QString::fromUtf8("btn_LThumb"));

        gridLayout->addWidget(btn_LThumb, 1, 1, 1, 1);

        btn_RThumb = new QPushButton(gridLayoutWidget);
        btn_RThumb->setObjectName(QString::fromUtf8("btn_RThumb"));

        gridLayout->addWidget(btn_RThumb, 1, 2, 1, 1);

        btn_savePhoto = new QPushButton(gridLayoutWidget);
        btn_savePhoto->setObjectName(QString::fromUtf8("btn_savePhoto"));

        gridLayout->addWidget(btn_savePhoto, 1, 0, 1, 1);

        imgframe = new QLabel(gridLayoutWidget);
        imgframe->setObjectName(QString::fromUtf8("imgframe"));
        imgframe->setFrameShape(QFrame::Box);
        imgframe->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(imgframe, 0, 0, 1, 1);

        lthumbframe = new QLabel(gridLayoutWidget);
        lthumbframe->setObjectName(QString::fromUtf8("lthumbframe"));
        lthumbframe->setFrameShape(QFrame::Box);
        lthumbframe->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lthumbframe, 0, 1, 1, 1);

        rthumbframe = new QLabel(gridLayoutWidget);
        rthumbframe->setObjectName(QString::fromUtf8("rthumbframe"));
        rthumbframe->setFrameShape(QFrame::Box);
        rthumbframe->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(rthumbframe, 0, 2, 1, 1);

        formLayoutWidget = new QWidget(tab);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 441, 242));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit_FirstName = new QLineEdit(formLayoutWidget);
        lineEdit_FirstName->setObjectName(QString::fromUtf8("lineEdit_FirstName"));
        lineEdit_FirstName->setCursor(QCursor(Qt::IBeamCursor));
        lineEdit_FirstName->setContextMenuPolicy(Qt::NoContextMenu);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_FirstName);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_LastName = new QLineEdit(formLayoutWidget);
        lineEdit_LastName->setObjectName(QString::fromUtf8("lineEdit_LastName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_LastName);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        dateEdit = new QDateEdit(formLayoutWidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setFocusPolicy(Qt::TabFocus);
        dateEdit->setCalendarPopup(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, dateEdit);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        radioMale = new QRadioButton(formLayoutWidget);
        radioMale->setObjectName(QString::fromUtf8("radioMale"));

        verticalLayout_2->addWidget(radioMale);

        radioFemale = new QRadioButton(formLayoutWidget);
        radioFemale->setObjectName(QString::fromUtf8("radioFemale"));

        verticalLayout_2->addWidget(radioFemale);


        formLayout->setLayout(3, QFormLayout::FieldRole, verticalLayout_2);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        lineEdit_Guardian = new QLineEdit(formLayoutWidget);
        lineEdit_Guardian->setObjectName(QString::fromUtf8("lineEdit_Guardian"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_Guardian);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_5);

        weightLayout = new QHBoxLayout();
        weightLayout->setSpacing(6);
        weightLayout->setObjectName(QString::fromUtf8("weightLayout"));
        spinBox_lbs = new QSpinBox(formLayoutWidget);
        spinBox_lbs->setObjectName(QString::fromUtf8("spinBox_lbs"));
        spinBox_lbs->setMaximum(999);

        weightLayout->addWidget(spinBox_lbs);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        weightLayout->addWidget(label_7);

        spinBox_oz = new QSpinBox(formLayoutWidget);
        spinBox_oz->setObjectName(QString::fromUtf8("spinBox_oz"));
        spinBox_oz->setMaximum(11);

        weightLayout->addWidget(spinBox_oz);

        label_19 = new QLabel(formLayoutWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        weightLayout->addWidget(label_19);


        formLayout->setLayout(5, QFormLayout::FieldRole, weightLayout);

        label_51 = new QLabel(formLayoutWidget);
        label_51->setObjectName(QString::fromUtf8("label_51"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_51);

        heightLayout = new QHBoxLayout();
        heightLayout->setSpacing(6);
        heightLayout->setObjectName(QString::fromUtf8("heightLayout"));
        spinBox_ft = new QSpinBox(formLayoutWidget);
        spinBox_ft->setObjectName(QString::fromUtf8("spinBox_ft"));
        spinBox_ft->setMaximum(10);

        heightLayout->addWidget(spinBox_ft);

        label_20 = new QLabel(formLayoutWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        heightLayout->addWidget(label_20);

        spinBox_in = new QSpinBox(formLayoutWidget);
        spinBox_in->setObjectName(QString::fromUtf8("spinBox_in"));
        spinBox_in->setMaximum(11);

        heightLayout->addWidget(spinBox_in);

        label_21 = new QLabel(formLayoutWidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        heightLayout->addWidget(label_21);


        formLayout->setLayout(6, QFormLayout::FieldRole, heightLayout);

        verticalLayoutWidget = new QWidget(tab);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(600, 10, 191, 95));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btn_Print = new QPushButton(verticalLayoutWidget);
        btn_Print->setObjectName(QString::fromUtf8("btn_Print"));
        btn_Print->setFocusPolicy(Qt::TabFocus);

        verticalLayout->addWidget(btn_Print);

        btn_clear = new QPushButton(verticalLayoutWidget);
        btn_clear->setObjectName(QString::fromUtf8("btn_clear"));
        btn_clear->setFocusPolicy(Qt::TabFocus);

        verticalLayout->addWidget(btn_clear);

        btn_Quit = new QPushButton(verticalLayoutWidget);
        btn_Quit->setObjectName(QString::fromUtf8("btn_Quit"));

        verticalLayout->addWidget(btn_Quit);

        gridLayoutWidget_2 = new QWidget(tab);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(600, 110, 191, 51));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_session = new QLabel(gridLayoutWidget_2);
        label_session->setObjectName(QString::fromUtf8("label_session"));
        label_session->setTextFormat(Qt::LogText);
        label_session->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_session, 0, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setTextFormat(Qt::RichText);

        gridLayout_2->addWidget(label_9, 0, 0, 1, 1);

        label_10 = new QLabel(gridLayoutWidget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setTextFormat(Qt::RichText);

        gridLayout_2->addWidget(label_10, 1, 0, 1, 1);

        label_total = new QLabel(gridLayoutWidget_2);
        label_total->setObjectName(QString::fromUtf8("label_total"));
        label_total->setTextFormat(Qt::LogText);
        label_total->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_total, 1, 1, 1, 1);

        label_8 = new QLabel(tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(470, 10, 111, 121));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/res/res/freemason.jpg")));
        label_8->setScaledContents(true);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        formLayoutWidget_2 = new QWidget(tab_2);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(10, 10, 781, 341));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(formLayoutWidget_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_11);

        lineEdit_Street = new QLineEdit(formLayoutWidget_2);
        lineEdit_Street->setObjectName(QString::fromUtf8("lineEdit_Street"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit_Street);

        label_12 = new QLabel(formLayoutWidget_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_12);

        lineEdit_Address2 = new QLineEdit(formLayoutWidget_2);
        lineEdit_Address2->setObjectName(QString::fromUtf8("lineEdit_Address2"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_Address2);

        label_25 = new QLabel(formLayoutWidget_2);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_25);

        lineEdit_MiddleName = new QLineEdit(formLayoutWidget_2);
        lineEdit_MiddleName->setObjectName(QString::fromUtf8("lineEdit_MiddleName"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lineEdit_MiddleName);

        label_26 = new QLabel(formLayoutWidget_2);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_26);

        lineEdit_Nickname = new QLineEdit(formLayoutWidget_2);
        lineEdit_Nickname->setObjectName(QString::fromUtf8("lineEdit_Nickname"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, lineEdit_Nickname);

        label_13 = new QLabel(formLayoutWidget_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_13);

        lineEdit_School = new QLineEdit(formLayoutWidget_2);
        lineEdit_School->setObjectName(QString::fromUtf8("lineEdit_School"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, lineEdit_School);

        label_14 = new QLabel(formLayoutWidget_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_14);

        lineEdit_Doctors = new QLineEdit(formLayoutWidget_2);
        lineEdit_Doctors->setObjectName(QString::fromUtf8("lineEdit_Doctors"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, lineEdit_Doctors);

        label_15 = new QLabel(formLayoutWidget_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, label_15);

        lineEdit_Dentist = new QLineEdit(formLayoutWidget_2);
        lineEdit_Dentist->setObjectName(QString::fromUtf8("lineEdit_Dentist"));

        formLayout_2->setWidget(6, QFormLayout::FieldRole, lineEdit_Dentist);

        label_24 = new QLabel(formLayoutWidget_2);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        formLayout_2->setWidget(7, QFormLayout::LabelRole, label_24);

        lineEdit_SSN = new QLineEdit(formLayoutWidget_2);
        lineEdit_SSN->setObjectName(QString::fromUtf8("lineEdit_SSN"));

        formLayout_2->setWidget(7, QFormLayout::FieldRole, lineEdit_SSN);

        label_16 = new QLabel(formLayoutWidget_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        formLayout_2->setWidget(8, QFormLayout::LabelRole, label_16);

        comboBox_Race = new QComboBox(formLayoutWidget_2);
        comboBox_Race->setObjectName(QString::fromUtf8("comboBox_Race"));

        formLayout_2->setWidget(8, QFormLayout::FieldRole, comboBox_Race);

        label_22 = new QLabel(formLayoutWidget_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        formLayout_2->setWidget(9, QFormLayout::LabelRole, label_22);

        lineEdit_Eyes = new QLineEdit(formLayoutWidget_2);
        lineEdit_Eyes->setObjectName(QString::fromUtf8("lineEdit_Eyes"));

        formLayout_2->setWidget(9, QFormLayout::FieldRole, lineEdit_Eyes);

        label_23 = new QLabel(formLayoutWidget_2);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        formLayout_2->setWidget(10, QFormLayout::LabelRole, label_23);

        lineEdit_Hair = new QLineEdit(formLayoutWidget_2);
        lineEdit_Hair->setObjectName(QString::fromUtf8("lineEdit_Hair"));
        lineEdit_Hair->setCursor(QCursor(Qt::IBeamCursor));

        formLayout_2->setWidget(10, QFormLayout::FieldRole, lineEdit_Hair);

        tabWidget->addTab(tab_2, QString());
        KeikiMWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(KeikiMWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 806, 23));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuExtras = new QMenu(menuBar);
        menuExtras->setObjectName(QString::fromUtf8("menuExtras"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        KeikiMWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(KeikiMWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setSizeGripEnabled(false);
        KeikiMWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(lineEdit_FirstName, lineEdit_LastName);
        QWidget::setTabOrder(lineEdit_LastName, dateEdit);
        QWidget::setTabOrder(dateEdit, radioMale);
        QWidget::setTabOrder(radioMale, radioFemale);
        QWidget::setTabOrder(radioFemale, lineEdit_Guardian);
        QWidget::setTabOrder(lineEdit_Guardian, spinBox_lbs);
        QWidget::setTabOrder(spinBox_lbs, spinBox_oz);
        QWidget::setTabOrder(spinBox_oz, spinBox_ft);
        QWidget::setTabOrder(spinBox_ft, spinBox_in);
        QWidget::setTabOrder(spinBox_in, btn_savePhoto);
        QWidget::setTabOrder(btn_savePhoto, btn_LThumb);
        QWidget::setTabOrder(btn_LThumb, btn_RThumb);
        QWidget::setTabOrder(btn_RThumb, btn_Print);
        QWidget::setTabOrder(btn_Print, btn_clear);
        QWidget::setTabOrder(btn_clear, btn_Quit);
        QWidget::setTabOrder(btn_Quit, lineEdit_Street);
        QWidget::setTabOrder(lineEdit_Street, lineEdit_Address2);
        QWidget::setTabOrder(lineEdit_Address2, lineEdit_MiddleName);
        QWidget::setTabOrder(lineEdit_MiddleName, lineEdit_Nickname);
        QWidget::setTabOrder(lineEdit_Nickname, lineEdit_School);
        QWidget::setTabOrder(lineEdit_School, lineEdit_Doctors);
        QWidget::setTabOrder(lineEdit_Doctors, lineEdit_Dentist);
        QWidget::setTabOrder(lineEdit_Dentist, lineEdit_SSN);
        QWidget::setTabOrder(lineEdit_SSN, comboBox_Race);
        QWidget::setTabOrder(comboBox_Race, lineEdit_Eyes);
        QWidget::setTabOrder(lineEdit_Eyes, lineEdit_Hair);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuExtras->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionClear_All);
        menuFile->addAction(actionPrint);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuExtras->addAction(actionUse_Template_File);
        menuExtras->addAction(actionCreate_PDF);
        menuExtras->addSeparator();
        menuExtras->addAction(actionReset_Session_Couter);
        menuExtras->addAction(actionReset_Total_Counter);
        menuHelp->addAction(actionTutorial);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionAbout_Qt);

        retranslateUi(KeikiMWindow);

        tabWidget->setCurrentIndex(0);
        comboBox_Race->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(KeikiMWindow);
    } // setupUi

    void retranslateUi(QMainWindow *KeikiMWindow)
    {
        KeikiMWindow->setWindowTitle(QApplication::translate("KeikiMWindow", "Masonic Child ID / Grand Lodge Hawaii F&AM", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("KeikiMWindow", "Quit...", 0, QApplication::UnicodeUTF8));
        actionQuit->setShortcut(QApplication::translate("KeikiMWindow", "Alt+Q", 0, QApplication::UnicodeUTF8));
        actionPrint->setText(QApplication::translate("KeikiMWindow", "Print...", 0, QApplication::UnicodeUTF8));
        actionPrint->setShortcut(QApplication::translate("KeikiMWindow", "Alt+P", 0, QApplication::UnicodeUTF8));
        actionClear_All->setText(QApplication::translate("KeikiMWindow", "Reset Fields...", 0, QApplication::UnicodeUTF8));
        actionClear_All->setShortcut(QApplication::translate("KeikiMWindow", "Alt+C", 0, QApplication::UnicodeUTF8));
        actionUse_Template_File->setText(QApplication::translate("KeikiMWindow", "Use Template File...", 0, QApplication::UnicodeUTF8));
        actionUse_Template_File->setShortcut(QApplication::translate("KeikiMWindow", "Alt+T", 0, QApplication::UnicodeUTF8));
        actionReset_Session_Couter->setText(QApplication::translate("KeikiMWindow", "Reset Session Couter...", 0, QApplication::UnicodeUTF8));
        actionReset_Total_Counter->setText(QApplication::translate("KeikiMWindow", "Reset Total Counter...", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("KeikiMWindow", "About", 0, QApplication::UnicodeUTF8));
        actionAbout_Qt->setText(QApplication::translate("KeikiMWindow", "About Qt", 0, QApplication::UnicodeUTF8));
        actionCreate_PDF->setText(QApplication::translate("KeikiMWindow", "Create PDF...", 0, QApplication::UnicodeUTF8));
        actionTutorial->setText(QApplication::translate("KeikiMWindow", "Tutorial", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        btn_LThumb->setStatusTip(QApplication::translate("KeikiMWindow", "Put Child's Left Thumb on Fingerprint Reader", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        btn_LThumb->setText(QApplication::translate("KeikiMWindow", "Scan Left Thumb", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        btn_RThumb->setStatusTip(QApplication::translate("KeikiMWindow", "Put Child's Right Thumb on Fingerprint Reader", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        btn_RThumb->setText(QApplication::translate("KeikiMWindow", "Scan Right Thumb", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        btn_savePhoto->setStatusTip(QApplication::translate("KeikiMWindow", "Activate WebCam / Take Picture", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        btn_savePhoto->setText(QApplication::translate("KeikiMWindow", "Activate WebCam", 0, QApplication::UnicodeUTF8));
        imgframe->setText(QString());
        lthumbframe->setText(QString());
        rthumbframe->setText(QString());
        label->setText(QApplication::translate("KeikiMWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Droid Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">First Name</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        lineEdit_FirstName->setStatusTip(QApplication::translate("KeikiMWindow", "Enter First Name here", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        lineEdit_FirstName->setPlaceholderText(QApplication::translate("KeikiMWindow", "First Name", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("KeikiMWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Droid Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Last Name</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        lineEdit_LastName->setStatusTip(QApplication::translate("KeikiMWindow", "Enter Last Name here", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        lineEdit_LastName->setPlaceholderText(QApplication::translate("KeikiMWindow", "Last Name", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("KeikiMWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Droid Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Birthday</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        dateEdit->setStatusTip(QApplication::translate("KeikiMWindow", "Enter Date of Birth here", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        label_4->setText(QApplication::translate("KeikiMWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Droid Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Gender</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        radioMale->setStatusTip(QApplication::translate("KeikiMWindow", "Child is male", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        radioMale->setText(QApplication::translate("KeikiMWindow", "Male", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        radioFemale->setStatusTip(QApplication::translate("KeikiMWindow", "Child is female", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        radioFemale->setText(QApplication::translate("KeikiMWindow", "Female", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("KeikiMWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Droid Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Guardian</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        lineEdit_Guardian->setStatusTip(QApplication::translate("KeikiMWindow", "Enter Name of Guardian here", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        lineEdit_Guardian->setPlaceholderText(QApplication::translate("KeikiMWindow", "Parent or Guardian", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("KeikiMWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Weight</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("KeikiMWindow", "lbs", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("KeikiMWindow", "oz", 0, QApplication::UnicodeUTF8));
        label_51->setText(QApplication::translate("KeikiMWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Height</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("KeikiMWindow", "ft", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("KeikiMWindow", "in", 0, QApplication::UnicodeUTF8));
        btn_Print->setText(QApplication::translate("KeikiMWindow", "Print Keiki ID", 0, QApplication::UnicodeUTF8));
        btn_clear->setText(QApplication::translate("KeikiMWindow", "Clear All", 0, QApplication::UnicodeUTF8));
        btn_Quit->setText(QApplication::translate("KeikiMWindow", "Quit", 0, QApplication::UnicodeUTF8));
        label_session->setText(QApplication::translate("KeikiMWindow", "0", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("KeikiMWindow", "<b>Session Counter</b>", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("KeikiMWindow", "<b>Total Counter</b>", 0, QApplication::UnicodeUTF8));
        label_total->setText(QApplication::translate("KeikiMWindow", "0", 0, QApplication::UnicodeUTF8));
        label_8->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("KeikiMWindow", "Basic Information", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("KeikiMWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Street</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lineEdit_Street->setText(QString());
        lineEdit_Street->setPlaceholderText(QApplication::translate("KeikiMWindow", "Street Address", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("KeikiMWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">City / State / Zip</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lineEdit_Address2->setText(QString());
        lineEdit_Address2->setPlaceholderText(QApplication::translate("KeikiMWindow", "City, State, Zip Code", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("KeikiMWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Middle Name</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lineEdit_MiddleName->setText(QString());
        lineEdit_MiddleName->setPlaceholderText(QApplication::translate("KeikiMWindow", "Middle Name or Initial", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("KeikiMWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Nickname</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lineEdit_Nickname->setText(QString());
        lineEdit_Nickname->setPlaceholderText(QApplication::translate("KeikiMWindow", "Call Name or other Nickname", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("KeikiMWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">School</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lineEdit_School->setText(QString());
        lineEdit_School->setPlaceholderText(QApplication::translate("KeikiMWindow", "School", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("KeikiMWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Doctors</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lineEdit_Doctors->setText(QString());
        lineEdit_Doctors->setPlaceholderText(QApplication::translate("KeikiMWindow", "Doctors", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("KeikiMWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Dentist</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lineEdit_Dentist->setText(QString());
        lineEdit_Dentist->setPlaceholderText(QApplication::translate("KeikiMWindow", "Dentist", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("KeikiMWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">SSN</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lineEdit_SSN->setPlaceholderText(QApplication::translate("KeikiMWindow", "Social Security Number", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("KeikiMWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Race</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        comboBox_Race->clear();
        comboBox_Race->insertItems(0, QStringList()
         << QApplication::translate("KeikiMWindow", "African-American", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("KeikiMWindow", "Asian", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("KeikiMWindow", "Caucasian", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("KeikiMWindow", "Hawaiian", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("KeikiMWindow", "Hispanic", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("KeikiMWindow", "Native American", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("KeikiMWindow", "Other, specify:", 0, QApplication::UnicodeUTF8)
        );
        label_22->setText(QApplication::translate("KeikiMWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Eye Color</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lineEdit_Eyes->setPlaceholderText(QApplication::translate("KeikiMWindow", "Eye Color", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("KeikiMWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Hair Color</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lineEdit_Hair->setPlaceholderText(QApplication::translate("KeikiMWindow", "Hair Color", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("KeikiMWindow", "Additional Information", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("KeikiMWindow", "File", 0, QApplication::UnicodeUTF8));
        menuExtras->setTitle(QApplication::translate("KeikiMWindow", "Extras", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("KeikiMWindow", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class KeikiMWindow: public Ui_KeikiMWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEIKIMWINDOW_H
