//
// Created by Green on 22/03/2020.
//

#include "Studente.h"
#include <ctime>
#include <iostream>

using namespace std;

Studente::Studente(char iN, char iC, int m) : Persona(iN, iC), matricola(m) {
   arrayVoti = new int[size];

   srand(time(nullptr));

   for (int i = 0; i < size; i++) {
      arrayVoti[i] = rand() % (30-18 +1) + 18;
   }
}

void Studente::saluta() {
   Persona::saluta();

   cout << "Sono uno studente con matricola " << matricola << " e i miei voti sono: ";

   for (int i = 0; i < size; i++) {
      cout << arrayVoti[i] << ", ";
   }

   cout << "con la media del " << calcolaMedia() << endl;
}

int Studente::calcolaMedia() {
   int avg = 0;

   for (int i = 0; i < size; i++) {
      avg += arrayVoti[i];
   }

   return avg / size;
}

Studente::~Studente() {
   matricola = 0;
   size = 0;

   delete[] arrayVoti;
}
