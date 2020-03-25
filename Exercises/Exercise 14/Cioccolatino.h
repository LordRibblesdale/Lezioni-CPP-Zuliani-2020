//
// Created by Green on 25/03/2020.
//

#ifndef PROJECTS_CPP_CIOCCOLATINO_H
#define PROJECTS_CPP_CIOCCOLATINO_H

#include "Merendina.h"

class Cioccolatino : public Merendina {
   int dimensioneConfezione;

public:
   Cioccolatino(string name, string brand, int price, int packageDim);

   string descrizione() const override;
};


#endif //PROJECTS_CPP_CIOCCOLATINO_H
