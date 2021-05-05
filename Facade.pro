QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++14 console
CONFIG -= app_bundle

QMAKE_CXXFLAGS += /std:c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dbconector.cpp \
    level.cpp \
    levelfacade.cpp \
    main.cpp \
    mainwindow.cpp \
    user.cpp \
    userfacade.cpp

HEADERS += \
    crudeinterface.h \
    dbconector.h \
    level.h \
    levelfacade.h \
    mainwindow.h \
    user.h \
    userfacade.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
