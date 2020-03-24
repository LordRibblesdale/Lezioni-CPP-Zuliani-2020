#include "stage.h"

/* Assegnazione "astratta" a tutte le funzioni
 * Richiamata tramite "sottoinsiemi" di codice (__::__) (accesso in codice racchiuso da {})
 * La chiamata a variabili è gia nota all'header quindi non sarà necessario riferire dove si trova
 */

// Accesso come namespace (sistema di organizzazione codice con nome)
Stage::Stage(int id, int difficulty) : id(id), difficulty(difficulty) { //Inizializzazione a lista
   next = nullptr;
}

Stage::~Stage() {
   id = 0;
   difficulty = 0;

   delete(next);
}