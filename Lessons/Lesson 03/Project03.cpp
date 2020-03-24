//
// Created by Green on 04/03/2020.
//

// Inizializzazione variabile con tipo, nome e valore. Accede al valore nell'indirizzo di memoria
// Puntatore: inizializato con tipo* nome = &puntatore;
// ^--Il valore della variabile è l'indirizzo di memoria alla variabile connessa

/* tipo a = valore;         // Inizializza la memoria
 * tipo* b = &a;            // Conserva l'indirizzo di memoria
 * *b = valoreNuovo;        // Deferenziare -> accedere al valore della variabile
 * b = nuovoLinkMemoria;    // Modifica l'indirizzo di memoria (funziona anche come somma)
 */

// Indirizzo di memoria 0x <valore esadecimale>

#include <iostream>

int main() {
    char string[20] = "Stringa come array"; // Necessita di spazio per aggiungere il termine stringa '\0'

    std::cout << string << "\n";    // Termina stampa a '\0', se non lo trova, si stampa all'infinito
}

