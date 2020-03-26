//
// Created by Green on 22/03/2020.
//

#ifndef PROJECTS_CPP_PERSONA_H
#define PROJECTS_CPP_PERSONA_H

#include "../Home/Casa.h"
#include <memory>

using namespace std;

class Persona {
   string inizialeNome;
   string inizialeCognome;

   shared_ptr<Casa> casa;

public:
   Persona(string&& iN, string&& iC);
   Persona(const Persona& persona);
   Persona(Persona&& persona);
   ~Persona();

   virtual void saluta();

   void trasloca(Casa* newHome);

   const std::shared_ptr<Casa>& getCasa() const;

   void setCasa(Casa *newHome);

   Persona& operator=(const Persona& persona);

   Persona&operator=(Persona&& persona);
};


#endif //PROJECTS_CPP_PERSONA_H
