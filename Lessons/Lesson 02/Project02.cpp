//
// Created by Green on 04/03/2020.
//
#include <iostream>

// Variabile globale (se esterna a funzioni, classi e namespaces
char test = 'a';
int points = 0;

// Inizializzazione di un "organizzatore" di variabili e codici
// Obiettivo di organizzare variabili ed evitare conflitti
namespace cardPoints {
    int points = 0;

    bool isNull() {
        return points == 0;
    }
}

int addPoints(int value) {
    // Variabile locale
    int endValue = value + 15;
    points += endValue;

    std::cout << "Punti" << points << "\n";

    return points;
}

using namespace std;

int main() {
    std::cout << "Punti generali" << points << "\n";
    // Uso di :: per accedee a librerie e namespaces
    std::cout << "Punti generali" << cardPoints::points << "\n";
    cout << "Uso di funzione senza richiamo della libreria specifica\n";
}
