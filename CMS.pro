QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    field_widget.cpp \
    game_widget.cpp \
    main.cpp \
    n_class/test.cpp \
    startwindow.cpp

HEADERS += \
    constnums.h \
    field_widget.h \
    game_widget.h \
    startwindow.h

FORMS += \
    field_widget.ui \
    game_widget.ui \
    startwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    img.qrc

DISTFILES += \
    img/103017284_p0_master1200.jpg
