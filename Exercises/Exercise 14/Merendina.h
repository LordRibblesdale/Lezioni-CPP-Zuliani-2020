//
// Created by Green on 22/03/2020.
//

#ifndef PROJECTS_CPP_MERENDINA_H
#define PROJECTS_CPP_MERENDINA_H

#include "Dolce.h"

class Merendina : public Dolce {
protected:
   string marca;
   int prezzo;

public:
   Merendina(string name, string brand, int price);

   string descrizione() const override;
};


#endif //PROJECTS_CPP_MERENDINA_H
