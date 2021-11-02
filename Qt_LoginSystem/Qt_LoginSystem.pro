QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainother.cpp \
    mainwindow.cpp

HEADERS += \
    mainother.h \
    mainwindow.h

FORMS += \
    mainother.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resource.qrc

DISTFILES += \
    ../../../Youtube Stuff/imgs/Mulo \
    ../../Qt Code/imgs/Img.jfif \
    ../../Qt Code/imgs/Img.jfif \
    ../../Qt Code/imgs/photo-1533450718592-29d45635f0a9.jfif \
    ../../Qt Code/imgs/photo-1533450718592-29d45635f0a9.jfif
