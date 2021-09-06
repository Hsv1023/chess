QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ai.cpp \
    algorithm.cpp \
    animation.cpp \
    character.cpp \
    characterlabel.cpp \
    clicklabel.cpp \
    hintlabel.cpp \
    main.cpp \
    maindialog.cpp \
    map.cpp

HEADERS += \
    ai.h \
    algorithm.h \
    animation.h \
    character.h \
    characterlabel.h \
    clicklabel.h \
    config.h \
    hintlabel.h \
    maindialog.h \
    map.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    pic.qrc

DISTFILES +=
