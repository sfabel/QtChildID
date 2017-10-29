#-------------------------------------------------
#
# Project created by QtCreator 2010-11-14T11:40:17
#
#-------------------------------------------------

QT       += core gui

TARGET = QtChildID
TEMPLATE = app
#DEFINES += DEBUG

#LIBS += -L/usr/local/lib
LIBS += -lfprint -lpoppler-qt4

# old opencv libs
#LIBS += -lcv -lcxcore -lhighgui

# new opencv libs
LIBS += -lopencv_core -lopencv_highgui

INCLUDEPATH += /usr/local/include /usr/include/libfprint

SOURCES += main.cpp\
           keikimwindow.cpp \
           qtopencv.cpp \
           Image_Processing.cpp \
           fingerprint.cpp

HEADERS  += keikimwindow.h \
            qtopencv.h \
            Image_Processing.h \
            fingerprint.h

FORMS    += keikimwindow.ui

RESOURCES += resources.qrc
