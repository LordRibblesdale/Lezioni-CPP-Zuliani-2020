//
// Created by Green on 22/03/2020.
//

#include "Ciambellone.h"

#include <utility>

using namespace std;

Ciambellone::Ciambellone(string name, string* ingredients, int size) : Dolce(move(name)) {
   ingredienti = ingredients;
   iSize = size;
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

int Ciambellone::getISize() const {
    return iSize;
}

void Ciambellone::addString(string& ingredient) {
    string* newIngredients = new string[iSize+1];

    for (int i = 0; i < iSize; i++) {
        newIngredients[i] = ingredienti[i];
    }

    newIngredients[iSize] = move(ingredient);

    delete[](ingredienti);

    ingredienti = newIngredients;
}

ostream& operator<<(ostream& stream, Ciambellone& ciambellone) {
   return stream << ciambellone.descrizione();
}

void operator+=(Ciambellone& ciambellone, string& ingredient) {
    ciambellone.addString(ingredient);
}