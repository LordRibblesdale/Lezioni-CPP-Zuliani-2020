//
// Created by Green on 22/03/2020.
//

#include "Merendina.h"

#include <utility>

Merendina::Merendina(string name, string brand, int price) : Dolce(move(name)), marca(move(brand)), prezzo(move(price)) {}

string Merendina::descrizione() const {
   return Dolce::descrizione().append("; Marca: ").append(marca).append("; Prezzo: ").append((char*)(prezzo));
}