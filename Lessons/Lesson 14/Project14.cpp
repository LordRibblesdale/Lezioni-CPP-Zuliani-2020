/* Copy constructor (creazione oggetto a partire da oggetto non istanziato).
 *    -> A partire dalla creazione dell'oggetto, CLONANDO l'oggetto tramite il metodo apposito type(const type& obj) {}
 *    -> type obj1 = new type()
 *       type obj2 = new type(obj1)
 *       type obj3 = obj1;
 *    -> type(const type& obj)
 *
 * Copy assignment (sostituzione di un oggetto già istanziato, sovrascrivendo valori e liberando memoria di vecchi puntatori per sostituirli coi nuovi
 *    -> obj1 = obj2
 *    -> type& operator=(type& obj) {} (restituzione *this, this indica il puntatore)
 *
 * Spostare oggetti
 *    |-> esempio: creare array piu grande, spostare interamente l'array senza dover istanziare un ciclo di copia
 *    |-> a livello di performance è più veloce spostare l'intero blocco di memoria
 * Move constructor e Move assignment
 *
 * Move constructor:
 *    -> tramite comando move()
 *    -> type(type&& obj)
 *       Richiamare il move constructor richiamando &&, ovvero richiamando R-value chiamato con type&&

 *    -> Spostare e distribuire risorse alla nuova variabile
 *    -> Spostare tutti i valori e resettare i valori dell'altra variabile
 * Move assignment:
 *    -> Stesso comportamento del move constructor ma con l'assegnazione
 *    -> Resettare puntatori e cancellarli della memoria
 *    -> type& operator=(type&& obj)
 *
 *
 * L-value (variabile a sinistra dell'uguale)
 * R-value (valore a destra dell'uguale), valore temporaneo risultato da una operazione (noto con &&)
 *    -> anche oggetti/valori istanziati unicamente negli argomenti di una funzione sono R value
 *    -> nella funzione, gli argomenti sono variabili locali invece
 *    -> std::move(obj) passa gli oggetti come R-value
 *
 * Gli spostamenti in memoria permettono di ottimizzare l'uso di memoria e calcolo, evitando di creare oggetti superflui (temporanei e non)
 *    -> Invece di creare copie in memoria temporanee tramite copie (per essere poi liberate alla fine della funzione)
 *
 * Regola del 5: (richiesta di implementazione, per un migliore codice, per evitare le funzioni default, che non eliminano puntatori)
 *    - Distruttore, Copy Constructor, Copy Assignment, Move Constructor, Move Assignment
 *    |-> IMPORTANTE: implementare uno di questi, richiede l'implementazione di tutti gli altri
 *
 *
 * Stringhe
 *    - nella libreria iostream
 *    - elimina (deallocata) autonomamente la memoria (a meno di puntatori a stringa)
 *    - con funzioni sulle stringhe già presenti
 *    - esiste raw literal, per evitare i caratteri di escape o speciali -> R"(.....)"
 */