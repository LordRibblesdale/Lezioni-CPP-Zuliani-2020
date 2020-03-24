/* Classi e Struct come strutture dati (collezione dati) per rappresentazione di oggetti tramite informazioni e funzioni
 * Definizione di pubblico e privato in classi ("public:" e "private:")
 *
 * File di intestazione (header)
 * |-> istruzioni del preprocessore ((pre)compilatore richiede di collegare le funzioni necessarie incluse nei file di intestazione)
 * |-> aggiunta del codide
 *
 * cpp include h, h puo includere altri h ma include anche il cpp annesso (per separare codice)
 * |-> inclusione unica di files h (per evitare di copiare molte volte un file header (dovere del preprocessore)
 *    |-> #define definisce la parola ____, fino alla fine di #ifndef e #endif
 *    |-> #ifndef controlla se la parola NON è gia stata definita
 *
 * EVITARE file h ciclici (ovvero un ciclo connesso di file h), il preprocessore entra in loop (dipende dal design del codice)
 * Esempio, due classi non devono dipendere tra loro ciclicamente
 *
 * .CPP -> .O -> .Executable
 * (generazione di file .o per selezionare ciò da compilare)
 *
 * Linking: tramite makefile
 *    - creazione oggetti
 *    - ricompilazione dei file unicamente modificati
 *    - linking nel file eseguibile
 *
 * Inclusione di file .cpp (compilazione insieme ai file collegati, il che richiede tempo)
 * ||
 * V
 * File header: collegamento indipendente tra file cpp e informazioni (astrazione separata)
 *    - interesse unicamente della funzione, cosa restituisce, il suo nome e i suoi attributi
 *
 * Collegamento cpp a header -e- header a cpp
 * VEDI ESERCIZIO 07 (Stage.cpp)
 *
 * Random: funzioni pseudorandomici per generare numeri variabili ma diversi tra loro abbastanza da evitare ripetizioni
 *
 * <cstdlib> rand e srand
 * <ctime> time
 * % operatore di resto (limitazione circolare, periodica)
 */