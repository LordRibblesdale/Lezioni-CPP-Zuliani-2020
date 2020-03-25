//
// Created by Green on 22/03/2020.
//

#ifndef PROJECTS_CPP_CIAMBELLONE_H
#define PROJECTS_CPP_CIAMBELLONE_H

#include "Dolce.h"
#include <iostream>

class Ciambellone : public Dolce {
   string* ingredienti;
   int iSize = 0;

public:
   Ciambellone(string name, string* ingredients, int size);

   string descrizione() const override;

   int getISize() const;

   void addString(string& ingredient);
};


#endif //PROJECTS_CPP_CIAMBELLONE_H
