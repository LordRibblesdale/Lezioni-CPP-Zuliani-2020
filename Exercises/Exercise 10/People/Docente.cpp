//
// Created by Green on 22/03/2020.
//

#include "Docente.h"
#include <iostream>

using namespace std;

Docente::Docente(string&& iN, string&& iC, unsigned int nI, unsigned int nS) : Persona(move(iN), move(iC)) {
   numInsegnamenti = nI;
   numStudenti = nS;
}

Docente::Docente(const Docente &docente) : Persona(docente) {
   numStudenti = docente.numStudenti;
   numInsegnamenti = docente.numInsegnamenti;
}

Docente::Docente(Docente &&docente) : Persona(move(docente)) {
   numStudenti = docente.numStudenti;
   numInsegnamenti = docente.numInsegnamenti;

   docente.numStudenti = 0;
   docente.numInsegnamenti = 0;
}

void Docente::saluta() {
   Persona::saluta();

   cout << "Sono un insegnante con " << numInsegnamenti << " insegnamenti per un totale di " << numStudenti << endl;
}

Docente::~Docente() {
   numInsegnamenti = 0;
   numStudenti = 0;
}

Docente &Docente::operator=(const Docente &docente) {
   numStudenti = docente.numStudenti;
   numInsegnamenti = docente.numInsegnamenti;

   return *this;
}

Docente &Docente::operator=(Docente &&docente) {
   numStudenti = docente.numStudenti;
   numInsegnamenti = docente.numInsegnamenti;

   docente.numStudenti = 0;
   docente.numInsegnamenti = 0;

   return *this;
}

