QT           += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

DEFINES      += QT_DEPRECATED_WARNINGS

TEMPLATE      = app

TARGET        = application

HEADERS      += mainwindow.h

SOURCES      += main.cpp \
                mainwindow.cpp

RESOURCES    += application.qrc


