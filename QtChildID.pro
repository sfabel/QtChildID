### QtChildID Project File
###
### stephan.fabel+QtChildID@gmail.com

TARGET       = QtChildID
TEMPLATE     = app

### ENABLE DEBUGGING
#DEFINES += DEBUG

### LOCAL OPTIONS
#INCLUDEPATH += /usr/local/include /usr/include/libfprint
#LIBS        += -L/usr/local/lib

QT          += core gui
INCLUDEPATH += /usr/include/libfprint
LIBS        += -lfprint -lpoppler-qt4 -lopencv_core -lopencv_highgui

SOURCES     += main.cpp\
               keikimwindow.cpp \
               qtopencv.cpp \
               imageprocessing.cpp \
               fingerprint.cpp

HEADERS     += keikimwindow.h \
               qtopencv.h \
               imageprocessing.h \
               fingerprint.h

FORMS       += keikimwindow.ui

RESOURCES   += resources.qrc
