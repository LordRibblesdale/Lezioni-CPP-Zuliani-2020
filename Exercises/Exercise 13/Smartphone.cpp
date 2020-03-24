//
// Created by Green on 22/03/2020.
//

#include "Smartphone.h"

#include <utility>

Smartphone::Smartphone(string model, string os, float screenSize, unsigned int memory) : Telefono(move(model), move(os), screenSize, memory) {
   apps = new string[appSize];
   numeriPreferiti = new unsigned int[prefSize];
}

Smartphone::~Smartphone() {
   appSize = 0;
   delete[] apps;

   prefSize = 0;
   delete[](numeriPreferiti);
}

void Smartphone::stampaApp() const {
   cout << "Applicazioni installate:" << endl;

   for (auto i = 0; i < appSize; i++) {
      cout << " -> " << apps[i] << endl;
   }

   cout << endl;
}

void Smartphone::installaApp(string app) {
   auto* newApps = new string[++appSize];

   newApps[0] = move(app);

   for (int i = 1; i < appSize; i++) {
      newApps[i] = apps[i - 1];
   }

   delete[](apps);

   apps = newApps;
}

void Smartphone::disinstallaApp(unsigned int index) {
   if (index < appSize) {
      auto* newApps = new string[--appSize];

      for (int i = 0; i < index; i++) {
         newApps[i] = apps[i];
      }

      for (int i = 0; i < appSize-index; i++) {
         newApps[index+i] = apps[index+i+1];
      }

      delete[](apps);

      apps = newApps;
   }
}

void Smartphone::eliminaApp(unsigned int index) {
   if (index < appSize) {
      apps[index].clear();
      apps[index] = "_";
   }
}

unsigned int Smartphone::getNumeroPreferito(unsigned int index) {
   if (index < prefSize) {
      return numeriPreferiti[index];
   }
}

void Smartphone::chiama(unsigned int num) {
   bool isInRecentCalls = false;
   bool isAlreadyInArray = false;

   for (int i = 0; i < callSize; i++) {
      if (num == ultimeChiamate[i]) {
         isInRecentCalls = true;
         break;
      }
   }

   if (isInRecentCalls) {
      for (int i = 0; i < prefSize; i++) {
         if (num == numeriPreferiti[i]) {
            isAlreadyInArray = true;
            break;
         }
      }

      if (!isAlreadyInArray) {
         increaseArray(num);
      }
   }

   Telefono::chiama(num);
}

void Smartphone::increaseArray(unsigned int number) {
   auto* newNumber = new unsigned int[++prefSize];

   newNumber[0] = number;

   for (int i = 1; i < callSize; i++) {
      newNumber[i] = numeriPreferiti[i-1];
   }

   delete[](numeriPreferiti);

   numeriPreferiti = newNumber;
}

unsigned int Smartphone::getPrefSize() const {
   return prefSize;
}

