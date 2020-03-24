/* Creare una classe Float2 che rappresenti un vettore bidimensionale di numeri float.
 * Fare l'overload di tutti gli operatori ( vettore + vettore, vettore + scalare, vettore + scalare,...)
 * implementare anche prodotti scalari/vettoriali/normalizzazione...
 * Testare tutti gli operatori in un main a parte.
 */

#include <iostream>
#include "Float2.h"
using namespace std;

int main() {
   float scalar = 4.3;
   Float2 point1(5, 55);
   Float2 point2(-4, 6);

   cout << point1 << endl;
   cout << point2 << endl;

   cout << "Somma tra i due vettori: " << point1 + point2 << endl;
   cout << "Differenza tra i due vettori: " << point1 - point2 << endl;

   cout << "Prodotto per scalare da destra: " << point1*scalar << endl;
   cout << "Prodotto per scalare da sinistra: " << scalar*point1 << endl;

   cout << "Prodotto scalare tra i vettori: " << point1.dotProduct(point2) << endl;
   cout << "Prodotto vettoriale del secondo vettore: " << point2.crossProduct() << endl;

   cout << "Norma del primo vettore: " << point1.l2Norm() << endl;
   cout << "Normalizzazione del secondo vettore: " << point2.normalize() << endl;
   cout << "Attuale norma del secondo vettore: " << point2.l2Norm();

   return 0;
}