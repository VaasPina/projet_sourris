QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = prj_souris
CONFIG += c++11
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += \
    src/main.cpp\
    src/buttontester.cpp

HEADERS += \
    inc/buttontester.h


qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/*bin
!isEmpty(target.path): INSTALLS += target
