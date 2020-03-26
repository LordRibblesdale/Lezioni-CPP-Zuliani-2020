#include "People/Persona.h"
#include "People/Studente.h"
#include "People/Docente.h"
#include <memory>

using namespace std;

int main() {
   shared_ptr<Casa> casa1(new Casa(6, 11));
   shared_ptr<Casa> casa2(new Casa(2, 2));
   shared_ptr<Casa> casa3(new Casa(5, 20));
   shared_ptr<Casa> casa4(new Casa(4, 33));

   unique_ptr<Persona> persona1(new Persona("A", "B"));
   unique_ptr<Studente> studente1(new Studente("C", "D", 123));
   unique_ptr<Docente> docente1(new Docente("E", "F", 5, 35));
   unique_ptr<Persona> persona2(new Persona("G", "H"));
   unique_ptr<Studente> studente2(new Studente("I", "J", 456));
   unique_ptr<Docente> docente2(new Docente("K", "L", 10, 60));
   unique_ptr<Studente> studente3(new Studente("M", "N", 789));

   persona1->saluta();
   studente1->saluta();
   docente1->saluta();
   persona2->saluta();
   studente2->saluta();
   docente2->saluta();
   studente3->saluta();

   return 0;
}
