//
// Created by Green on 22/03/2020.
//

#include "Ciambellone.h"

Ciambellone::Ciambellone(string name, string* ingredients) : Dolce(move(name)) {
   ingredienti = ingredients;
}

string Ciambellone::descrizione() const {
   string description = Dolce::descrizione();

   //TODO here

   return
}

ostream& operator<<(ostream& stream, Ciambellone& ciambellone) {
   return stream << ciambellone.descrizione();
}

void operator+=(Ciambellone& ciambellone, string& ingredient) {
   ciambellone
}