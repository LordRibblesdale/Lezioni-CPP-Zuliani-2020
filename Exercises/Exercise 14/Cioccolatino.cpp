//
// Created by Green on 25/03/2020.
//

#include "Cioccolatino.h"

Cioccolatino::Cioccolatino(string name, string brand, int price, int packageDim) : Merendina(move(name), move(brand), price) {
   dimensioneConfezione = packageDim;
}

string Cioccolatino::descrizione() const {
   return string("Pacco da ").append(to_string(dimensioneConfezione)).append(" di [").append(Merendina::descrizione()).append("] Prezzo totale: ").append(to_string(dimensioneConfezione*prezzo));
}


