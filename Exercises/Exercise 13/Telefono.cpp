//
// Created by Green on 22/03/2020.
//

#include "Telefono.h"

Telefono::Telefono(string model, string os, float screenSize, unsigned int memory) {
   modello = model;
   sistemaOperativo = os;
   dimensioneSchermo = screenSize;
   memoria = memory;

   ultimeChiamate = new unsigned int[callSize];
}

Telefono::~Telefono() {
   modello.clear();
   sistemaOperativo.clear();
   dimensioneSchermo = 0;
   memoria = 0;

   delete[](ultimeChiamate);
}

const string& Telefono::getModello() const {
   return modello;
}

void Telefono::setModello(const string &s) {
   Telefono::modello = s;
}

const string &Telefono::getSistemaOperativo() const {
   return sistemaOperativo;
}

void Telefono::setSistemaOperativo(const string &sistemaOperativo) {
   Telefono::sistemaOperativo = sistemaOperativo;
}

float Telefono::getDimensioneSchermo() const {
   return dimensioneSchermo;
}

void Telefono::setDimensioneSchermo(float dimensioneSchermo) {
   Telefono::dimensioneSchermo = dimensioneSchermo <= 0 ? 0 : dimensioneSchermo;
}

unsigned int Telefono::getMemoria() const {
   return memoria;
}

void Telefono::setMemoria(unsigned int memoria) {
   Telefono::memoria = memoria <= 0 ? 0 : memoria;
}

int Telefono::getChiamataRecente(int index) const {
   if (index < callSize) {
      return ultimeChiamate[index];
   } else {
      return 0;
   }
}

void Telefono::chiama(unsigned int number) {
   auto* newNumber = new unsigned int[++callSize];

   newNumber[0] = number;

   for (int i = 1; i < callSize; i++) {
      newNumber[i] = ultimeChiamate[i-1];
   }

   delete[](ultimeChiamate);

   ultimeChiamate = newNumber;
}

unsigned int Telefono::getCallSize() const {
   return callSize;
}


