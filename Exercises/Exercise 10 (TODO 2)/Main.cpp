#include "People/Persona.h"
#include "People/Studente.h"
#include "People/Docente.h"
#include "Home/Casa.h"

int main() {
   Casa* casa1 = new Casa(6, 11);
   Casa* casa2 = new Casa(2, 2);
   Casa* casa3 = new Casa(5, 20);
   Casa* casa4 = new Casa(4, 33);

   Persona* persona1 = new Persona('A', 'B');
   Studente* studente1 = new Studente('C', 'D', 123);
   Docente* docente1 = new Docente('E', 'F', 5, 35);
   Persona* persona2 = new Persona('G', 'H');
   Studente* studente2 = new Studente('I', 'J', 456);
   Docente* docente2 = new Docente('K', 'L', 10, 60);
   Studente* studente3 = new Studente('M', 'N', 789);

   persona1->saluta();
   studente1->saluta();
   docente1->saluta();
   persona2->saluta();
   studente2->saluta();
   docente2->saluta();
   studente3->saluta();

   delete(casa1);
   delete(casa2);
   delete(casa3);
   delete(casa4);

   delete(persona1);
   delete(persona2);
   delete(studente1);
   delete(studente2);
   delete(studente3);
   delete(docente1);
   delete(docente2);

   return 0;
}
