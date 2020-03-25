//
// Created by Green on 22/03/2020.
//

#include <iostream>
#include "Dolce.h"

using namespace std;

Dolce::Dolce(string name) : nome(name) {}

string Dolce::descrizione() const {
   return nome;
}

ostream& operator<<(ostream& stream, Dolce& dolce) {
   return stream << "Dolce: " << dolce.descrizione();
}