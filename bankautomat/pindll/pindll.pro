QT -= gui
<<<<<<< HEAD:bankautomat/RFID/RFID.pro
QT += serialport
=======
QT += widgets
>>>>>>> d595f910600362778fa2dc77873bd119032e8ff8:bankautomat/pindll/pindll.pro

TEMPLATE = lib
DEFINES += PINDLL_LIBRARY

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    engine.cpp \
    pindll.cpp

HEADERS += \
    engine.h \
    pindll_global.h \
    pindll.h

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target

FORMS += \
    engine.ui
