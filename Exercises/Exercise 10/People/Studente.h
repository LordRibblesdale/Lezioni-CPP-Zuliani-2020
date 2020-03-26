//
// Created by Green on 22/03/2020.
//

#ifndef PROJECTS_CPP_STUDENTE_H
#define PROJECTS_CPP_STUDENTE_H

#include "Persona.h"
#include <memory>

class Studente : public Persona {
   int matricola;
   std::unique_ptr<int> arrayVoti;
   int size = 20;

public:
   Studente(string&& iN, string&& iC, int m);
   Studente(const Studente& studente);
   Studente(Studente&& studente);
   ~Studente();

   void saluta() override;

   int calcolaMedia();

   Studente& operator=(const Studente& studente);
   Studente& operator=(Studente&& studente);
};


#endif //PROJECTS_CPP_STUDENTE_H
