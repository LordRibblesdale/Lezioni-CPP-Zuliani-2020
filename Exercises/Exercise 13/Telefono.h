//
// Created by Green on 22/03/2020.
//

#ifndef PROJECTS_CPP_TELEFONO_H
#define PROJECTS_CPP_TELEFONO_H

#include <string>

using namespace std;

class Telefono {
protected:
   string modello;

   string sistemaOperativo;

   float dimensioneSchermo;
   unsigned int memoria;

   unsigned int* ultimeChiamate;
   unsigned int callSize = 0;

public:
   Telefono(string model, string os, float screenSize, unsigned int memory);

   ~Telefono();

   const string &getModello() const;

   void setModello(const string &s);

   const string &getSistemaOperativo() const;

   void setSistemaOperativo(const string &sistemaOperativo);

   float getDimensioneSchermo() const;

   void setDimensioneSchermo(float dimensioneSchermo);

   unsigned int getMemoria() const;

   void setMemoria(unsigned int memoria);

   int getChiamataRecente(int index) const;

   virtual void chiama(unsigned int number);

   unsigned int getCallSize() const;
};

#endif //PROJECTS_CPP_TELEFONO_H
