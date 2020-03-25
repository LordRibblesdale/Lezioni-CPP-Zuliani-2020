//
// Created by Green on 22/03/2020.
//

#include "Ciambellone.h"

using namespace std;

Ciambellone::Ciambellone(string name, string* ingredients) : Dolce(move(name)) {
   ingredienti = ingredients;
}

string Ciambellone::descrizione() const {
   string description = Dolce::descrizione();
   description.append("\nIngredienti presenti:\n");

   for (int i = 0; i < iSize; i++) {
      description.append(" -> " + ingredienti[i]);
      description.append("\n");
   }

   return description;
}

ostream& operator<<(ostream& stream, Ciambellone& ciambellone) {
   return stream << ciambellone.descrizione();
}

void operator+=(Ciambellone& ciambellone, string& ingredient) {
   ciambellone
}