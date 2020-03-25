#include <iostream>
#include "Dolce.h"
#include "Merendina.h"
#include "Ciambellone.h"
#include "Cioccolatino.h"

using namespace std;

int main() {
   int size = 3;
   Dolce* sweets[size];
   string ingredienti[7] = {"Farina", "Uova", "Latte", "Burro", "Zucchero", "Lievito", "Scorza di limone"};

   Merendina merendina("Buondi", "MarcaBoh", 1);
   Ciambellone ciambellone("Ciambellone", ingredienti, 7);
   Cioccolatino cioccolatino("Lindt", "Lindt", 2, 15);

   sweets[0] = &merendina;
   sweets[1] = &ciambellone;
   sweets[2] = &cioccolatino;

   for (int i = 0; i < size; i++) {
      cout << sweets[i]->descrizione() << endl;
   }

   return 0;
}