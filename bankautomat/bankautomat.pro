QT       += core gui serialport
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    naytasaldo.cpp \
    nostarahaa.cpp \
    pankkimenu.cpp \
    selaatilitapahtumia.cpp

HEADERS += \
    mainwindow.h \
    naytasaldo.h \
    nostarahaa.h \
    pankkimenu.h \
    selaatilitapahtumia.h

FORMS += \
    mainwindow.ui \
    naytasaldo.ui \
    nostarahaa.ui \
    pankkimenu.ui \
    selaatilitapahtumia.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

<<<<<<< HEAD




win32:CONFIG(release, debug|release): LIBS += -L$$PWD/rfid/build/release/ -lrfid
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/rfid/build/debug/ -lrfid

INCLUDEPATH += $$PWD/rfid
DEPENDPATH += $$PWD/rfid
=======
win32:CONFIG(release, debug|release): LIBS += -L$$PWD/pindll/build/release/ -lpindll
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/pindll/build/debug/ -lpindll

INCLUDEPATH += $$PWD/pindll
DEPENDPATH += $$PWD/pindll
>>>>>>> 478b26c537a8bacbe2f1c144f34841a530b94df7
