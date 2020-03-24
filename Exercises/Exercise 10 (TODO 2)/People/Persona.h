//
// Created by Green on 22/03/2020.
//

#ifndef PROJECTS_CPP_PERSONA_H
#define PROJECTS_CPP_PERSONA_H

#include "../Home/Casa.h"

class Persona {
   char inizialeNome;
   char inizialeCognome;

   Casa* casa;

public:
   Persona(char iN, char iC);

   ~Persona();

   virtual void saluta();

   void trasloca(Casa* newHome);

   Casa *getCasa() const;

   void setCasa(Casa *newHome);
};


#endif //PROJECTS_CPP_PERSONA_H
