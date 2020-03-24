//
// Created by Green on 22/03/2020.
//

#ifndef PROJECTS_CPP_DOCENTE_H
#define PROJECTS_CPP_DOCENTE_H

#include "Persona.h"

class Docente : Persona {
   unsigned int numInsegnamenti;
   unsigned int numStudenti;


public:
   Docente(char iN, char iC, unsigned int nI, unsigned int nS);

   ~Docente();

   void saluta() override;
};


#endif //PROJECTS_CPP_DOCENTE_H
