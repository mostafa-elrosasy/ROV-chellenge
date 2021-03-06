#-------------------------------------------------
#
# Project created by QtCreator 2019-09-24T08:43:03
#
#-------------------------------------------------

QT       += core gui multimedia multimediawidgets
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GUI
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
        topic.cpp \
        ros.cpp \
        msg.cpp \
        joystick.cpp \
        player.cpp \
        srv_.cpp \
        service.cpp

HEADERS += \
        mainwindow.h \
        topic.h \
        ros.h \
        msg.h \
        joystick.h \
        player.h \
        srv_.h \
        service.h
#FORMS += \
 #       mainwindow.ui

LIBS += -L/usr/local/lib -lSDL2
INCLUDEPATH += /usr/local/include
INCLUDEPATH += /usr/include/Qt5GStreamer-1.0/QGst
INCLUDEPATH += /usr/include/Qt5GStreamer-1.0/QGlib
INCLUDEPATH += /usr/include/Qt5GStreamer-1.0
INCLUDEPATH += /usr/include/gstreamer-1.0

CONFIG += link_pkgconfig
PKGCONFIG +=   Qt5GStreamer-1.0 Qt5GStreamerUi-1.0  gstreamer-1.0 gstreamer-video-1.0 Qt5GLib-2.0

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
