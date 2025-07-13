QT       += core gui sql
QT += charts


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    admindashboard.cpp \
    login_controller.cpp \
    main.cpp \
    mainwindow.cpp \
    md5.cpp \
    reserveroom.cpp \
    rmaintenance.cpp \
    room.cpp \
    studentdashboard.cpp

HEADERS += \
    admindashboard.h \
    login_controller.h \
    mainwindow.h \
    md5.h \
    reserveroom.h \
    rmaintenance.h \
    room.h \
    studentdashboard.h

FORMS += \
    admindashboard.ui \
    mainwindow.ui \
    reserveroom.ui \
    rmaintenance.ui \
    room.ui \
    studentdashboard.ui

# TRANSLATIONS += \
  #  Student_mang_sys_en_GB.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
