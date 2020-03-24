#include <iostream>
#include <ctime>
#include "Telefono.h"

unsigned int generaNumero() {
   unsigned int number = 0;
   int rnd = rand();

   switch (rnd % 3) {
      case 0:
         number = 333000000;
         break;
      case 1:
         number = 348000000;
         break;
      case 2:
         number = 389000000;
         break;
   }

   return number += rnd % 1000000;
}

int main() {
   srand(time(nullptr));

   Telefono phone("OnePlus 6", "Android 10", 6.25, 128);

   for (auto i = 0; i < 15; i++) {
      unsigned int num = generaNumero();
      phone.chiama(num);

      cout << "Ultimo numero chiamato: " << num << endl;

      if ((i+1) % 5 == 0) {
         int choice;
         cout << "Cerca numero chiamato (1-" << phone.getSize() << "):";
         cin >> choice;

         cout << " -> " << phone.getChiamataRecente(choice-1) << endl;
      }
   }

   return 0;
}