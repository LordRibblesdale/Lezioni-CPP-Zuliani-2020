//
// Created by Green on 22/03/2020.
//

#include "Docente.h"
#include <iostream>

using namespace std;

Docente::Docente(char iN, char iC, unsigned int nI, unsigned int nS) : Persona(iN, iC) {
   numInsegnamenti = nI;
   numStudenti = nS;
}

void Docente::saluta() {
   Persona::saluta();

   cout << "Sono un insegnante con " << numInsegnamenti << " insegnamenti per un totale di " << numStudenti << endl;
}

Docente::~Docente() {
   numInsegnamenti = 0;
   numStudenti = 0;
}
