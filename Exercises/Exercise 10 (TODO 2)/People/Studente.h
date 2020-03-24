//
// Created by Green on 22/03/2020.
//

#ifndef PROJECTS_CPP_STUDENTE_H
#define PROJECTS_CPP_STUDENTE_H

#include "Persona.h"

class Studente : Persona {
   int matricola;
   int* arrayVoti;
   int size = 20;

public:
   Studente(char iN, char iC, int m);

   ~Studente();

   void saluta() override;

   int calcolaMedia();
};


#endif //PROJECTS_CPP_STUDENTE_H
