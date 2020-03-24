//
// Created by Green on 22/03/2020.
//

#include "Persona.h"
#include <iostream>

using namespace std;

Persona::Persona(char iN, char iC) : inizialeNome(iN), inizialeCognome(iC) {
   casa = nullptr;
}

Persona::~Persona() {
   inizialeNome = 0;
   inizialeCognome = 0;

   delete(casa);
}

void Persona::saluta() {
   cout << "Le mie iniziali sono " << inizialeNome << " " << inizialeCognome << " ";

   if (casa) {
      cout << "e abito in una casa di " << casa->getNumDiStanze() << " a " << casa->getNumDiStanze();
   }

   cout << endl;
}

void Persona::trasloca(Casa* newHome) {
   setCasa(newHome);
}

Casa *Persona::getCasa() const {
   return casa;
}

void Persona::setCasa(Casa *newHome) {
   delete(casa);

   Persona::casa = newHome;
}

