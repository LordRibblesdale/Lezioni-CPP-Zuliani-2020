// Inclusione delle librerie standard IO di C++
// <...> se libreria predefinita (standard)
#include <iostream>

// Funzione principale del programma
int main()
{
    /* Dopo creazione codice sorgente
     * -> Linking (utilizzo di make [makefile], istruzioni di compilazione)
     * -> Compilazione (con controllo di filestamp)
     */

    // std -> Libreria Standard di C++
    // '::' per accesso a librerie
    // cout -> Stream di dati (stream, collegamento da programma a terminale (IO)
    // Stream determinato da < o > (< spostamento di stream a sinistra, > spostamento a destra)
    std::cout << "Hello World\n";
    std::cout << "Test" << " " << "SAS" << " " << "SOS\n";

    // Variabili
    int value = 0;
    // Graffe per scrittura di array
    long value1 = {0};
    float value2 = 1;
    double value3 = 2;

    int array[5] = {0, 1, 2, 3, 4};

    bool isChecked = true; // o false

    // Variabile "auto" per auto intuire la tipologia di variabile
    std::cout << sizeof(array) << "\n";

    // TODO: ??
    for (auto i = 0; i < sizeof(array)/sizeof(typeof(array[0])); i++) {
        std::cout << array[i] << " ";
    }

    return 0;
}
