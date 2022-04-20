#ifndef RFID_GLOBAL_H
#define RFID_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(RFID_LIBRARY)           // Määritellään DLL projektitiedostossa
#  define RFID_EXPORT Q_DECL_EXPORT // Tämä voimassa DLL:ässä
#else
#  define RFID_EXPORT Q_DECL_IMPORT // Tämä voimassa EXE:ssä, koska EXEn objektitiedostossa ei ole INTERFACECLASS_LIBRARYÄ määriteltynä
#endif

#endif // RFID_GLOBAL_H
