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
   Docente(string&& iN, string&& iC, unsigned int nI, unsigned int nS);
   Docente(const Docente& docente);
   Docente(Docente&& docente);
   ~Docente();

   void saluta() override;

   Docente& operator=(const Docente& docente);
   Docente& operator=(Docente&& docente);
};


#endif //PROJECTS_CPP_DOCENTE_H
