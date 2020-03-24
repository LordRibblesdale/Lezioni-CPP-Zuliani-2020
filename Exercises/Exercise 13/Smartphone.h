//
// Created by Green on 22/03/2020.
//

#ifndef PROJECTS_CPP_SMARTPHONE_H
#define PROJECTS_CPP_SMARTPHONE_H

#include <iostream>
#include <string>
#include "Telefono.h"

using namespace std;

// Definire tipo di ereditarietà (inheritance) tramite parole chiave
class Smartphone : public Telefono {
   string* apps;
   unsigned int appSize = 0;

   unsigned int* numeriPreferiti;
   unsigned int prefSize = 0;

public:
   Smartphone(string model, string os, float screenSize, unsigned int memory);

   ~Smartphone();

   void stampaApp() const;

   void installaApp(string app);

   void disinstallaApp(unsigned int index);

   void eliminaApp(unsigned int index);

   unsigned int getNumeroPreferito(unsigned int index);

   void chiama(unsigned int num) override;

   void increaseArray(unsigned int num);

   unsigned int getPrefSize() const;
};


#endif //PROJECTS_CPP_SMARTPHONE_H
