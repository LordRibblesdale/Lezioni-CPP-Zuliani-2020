#include "Persona.h"
#include <iostream>
#include <memory>

using namespace std;

Persona::Persona(string&& iN, string&& iC) : inizialeNome(iN), inizialeCognome(iC) {
   casa = nullptr;
}

Persona::Persona(const Persona &persona) : inizialeNome(persona.inizialeNome), inizialeCognome(persona.inizialeCognome) {
   casa = persona.casa;
}

Persona::Persona(Persona &&persona) : inizialeNome(move(persona.inizialeNome)), inizialeCognome(move(persona.inizialeCognome)) {
   casa = persona.casa;

   persona.inizialeNome.clear();
   persona.inizialeCognome.clear();
}

Persona::~Persona() {
   inizialeNome.clear();
   inizialeCognome.clear();
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

const std::shared_ptr<Casa>& Persona::getCasa() const {
   return casa;
}

void Persona::setCasa(Casa *newHome) {
   //TODO ??
   casa = unique_ptr<Casa>(newHome);
}

Persona &Persona::operator=(const Persona &persona) {
   inizialeNome = persona.inizialeNome;
   inizialeCognome = persona.inizialeCognome;

   casa = persona.casa;

   return *this;
}

Persona &Persona::operator=(Persona &&persona) {
   inizialeNome = persona.inizialeNome;
   inizialeCognome = persona.inizialeCognome;
   casa = persona.casa;

   persona.inizialeNome.clear();
   persona.inizialeCognome.clear();

   return *this;
}

