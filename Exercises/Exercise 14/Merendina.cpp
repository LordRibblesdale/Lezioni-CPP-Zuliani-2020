#include "Merendina.h"

#include <utility>

Merendina::Merendina(string name, string brand, int price) : Dolce(move(name)), marca(move(brand)), prezzo(price) {}

string Merendina::descrizione() const {
   return Dolce::descrizione().append("; Marca: ").append(marca).append("; Prezzo: ").append(to_string(prezzo));
}