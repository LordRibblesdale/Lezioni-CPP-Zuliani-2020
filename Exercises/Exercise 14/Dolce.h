//
// Created by Green on 22/03/2020.
//

#ifndef PROJECTS_CPP_DOLCE_H
#define PROJECTS_CPP_DOLCE_H

#include <string>

using namespace std;

class Dolce {
   string nome;

public:
   Dolce(string name);

   virtual string descrizione() const = 0;
};

#endif //PROJECTS_CPP_DOLCE_H
