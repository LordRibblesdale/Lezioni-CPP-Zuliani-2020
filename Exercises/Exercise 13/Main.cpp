#include <iostream>
#include <ctime>
#include "Smartphone.h"

unsigned int generaNumeroCasuale() {
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

unsigned int generaNueroManualmente() {
   int num = 0;

   cout << "Inserisci numero:";
   cin >> num;

   return num;
}

int main() {
   srand(time(nullptr));

   Smartphone phone("OnePlus 6", "Android 10", 6.25, 128);

   for (auto i = 0; i < 15; i++) {
      unsigned int num = generaNumeroCasuale();
      phone.chiama(num);

      cout << "Ultimo numero chiamato: " << num << endl;

      if ((i+1) % 3 == 0) {
         int choice;
         cout << "Cerca numero chiamato (1-" << phone.getCallSize() << "):";
         cin >> choice;

         cout << " -> " << phone.getChiamataRecente(choice-1) << endl;
      } else if ((i+1) % 5 == 0) {
         cout << "Numeri preferiti:" << endl;
         for (int j = 0; j < phone.getPrefSize(); j++) {
            cout << " => " << phone.getNumeroPreferito(j);
         }
      }
   }

   return 0;
}