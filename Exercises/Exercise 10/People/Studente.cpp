//
// Created by Green on 22/03/2020.
//

#include "Studente.h"
#include <ctime>
#include <iostream>

using namespace std;

Studente::Studente(string&& iN, string&& iC, int m) : Persona(move(iN), move(iC)), matricola(m) {
   arrayVoti = std::unique_ptr<int>(new int[size]);

   srand(time(nullptr));

   for (int i = 0; i < size; i++) {
      arrayVoti.get()[i] = rand() % (30-18 +1) + 18;
   }
}

Studente::Studente(const Studente &studente) : Persona(studente) {
   matricola = studente.matricola;
   arrayVoti = unique_ptr<int>(studente.arrayVoti.get());

   size = studente.size;
}

Studente::Studente(Studente &&studente) : Persona(move(studente)) {
   matricola = studente.matricola;
   arrayVoti = unique_ptr<int>(studente.arrayVoti.get());

   size = studente.size;

   studente.matricola = 0;
   size = 0;
}

void Studente::saluta() {
   Persona::saluta();

   cout << "Sono uno studente con matricola " << matricola << " e i miei voti sono: ";

   for (int i = 0; i < size; i++) {
      cout << arrayVoti.get()[i] << ", ";
   }

   cout << "con la media del " << calcolaMedia() << endl;
}

int Studente::calcolaMedia() {
   int avg = 0;

   for (int i = 0; i < size; i++) {
      avg += arrayVoti.get()[i];
   }

   return avg / size;
}

Studente::~Studente() {
   matricola = 0;
   size = 0;
}

Studente &Studente::operator=(const Studente &studente) {
   matricola = studente.matricola;
   arrayVoti = unique_ptr<int>(studente.arrayVoti.get());

   size = studente.size;

   return *this;
}

Studente &Studente::operator=(Studente &&studente) {
   matricola = studente.matricola;
   arrayVoti = unique_ptr<int>(studente.arrayVoti.get());
   size = studente.size;

   studente.matricola = 0;
   size = 0;

   return *this;}


