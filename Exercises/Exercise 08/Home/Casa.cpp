//
// Created by Green on 22/03/2020.
//

#include "Casa.h"

Casa::Casa() : numDiStanze(0), distanzaDalCentro(0) {

}

Casa::Casa(int nS, int dC) : numDiStanze(nS), distanzaDalCentro(dC) {

}

Casa::~Casa() {
   numDiStanze = 0;
   distanzaDalCentro = 0;
}

unsigned int Casa::getNumDiStanze() const {
   return numDiStanze;
}

unsigned int Casa::getDistanzaDalCentro() const {
   return distanzaDalCentro;
}

