#-------------------------------------------------
#
# Project created by QtCreator 2017-07-14T18:26:51
#
#-------------------------------------------------

QT       += core gui
QT       += multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AudioPlayer
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
    audiomainwindow.cpp \
    audioplaywidget.cpp \
    audiofilesdockwidget.cpp \
    audiostatuswidget.cpp \
    audioplay/playaudiocontrol.cpp \
    audiofile/audiofilemanager.cpp \
    audiofile/filedocument.cpp

HEADERS += \
    audiomainwindow.h \
    audioplaywidget.h \
    audiofilesdockwidget.h \
    audiostatuswidget.h \
    datadefine.h \
    audioplay/playaudiocontrol.h \
    audiofile/audiofilemanager.h \
    audiofile/filedocument.h

FORMS += \
    audiomainwindow.ui \
    audioplaywidget.ui \
    audiofilesdockwidget.ui \
    audiostatuswidget.ui

RESOURCES += \
    image.qrc
