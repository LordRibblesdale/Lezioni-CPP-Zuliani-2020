#include "Casa.h"

Casa::Casa() : numDiStanze(0), distanzaDalCentro(0) {

}

Casa::Casa(int nS, int dC) : numDiStanze(nS), distanzaDalCentro(dC) {

}

Casa::Casa(const Casa &home) {
   numDiStanze = home.getNumDiStanze();
   distanzaDalCentro = home.getDistanzaDalCentro();
}

Casa::Casa(Casa &&home) {
   // Accedendo dalla classe di Casa, posso accedere sia alle variabili private sia alle funzioni pubbliche
   // TODO quindi solo in Casa è possibile fare questo? Esternamente a Casa non dovrebbe essere possibile
   numDiStanze = home.getNumDiStanze();
   distanzaDalCentro = home.getDistanzaDalCentro();

   home.numDiStanze = 0;
   home.distanzaDalCentro = 0;
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

Casa& Casa::operator=(const Casa& home) {
   numDiStanze = home.getNumDiStanze();
   distanzaDalCentro = home.getDistanzaDalCentro();

   return *this;
}

Casa& Casa::operator=(Casa &&home) {
   numDiStanze = home.numDiStanze;
   distanzaDalCentro = home.distanzaDalCentro;

   home.numDiStanze = 0;
   home.distanzaDalCentro = 0;

   return *this;
}

