/* Ciclo For Each (For Range), ciclo su tutto l'array
 * Ciclo Switch presente in C++
 *
 * Array di stringhe (creazione di lunghezza automatica char var[] = "String";
 * Array va chiamato come puntatore nelle funzioni (type*)
 *
 * PUNTATORE: nullptr serve per controllare se un puntatore è nullo
 * *pointer dereferenzia il puntatore
 *
 * "endl" inserisce new line
 *
 * Input steam tramite >> "std::cin >> variabile" a cui attribuire il file
 * cin acquisisce da terminale i dati (tramite stream >>, da dx)
 *
 * Variabili costanti sono variabili fisse nell'esecuzione del programma
 * Valore attribuibile hard-coded oppure calcolato durante l'inizializzazione
 * "const type var" "type const var" inizializza variabili costanti
 *
 * Puntatori e costanti:
 *  -> Costante: variabile fissa
 *  -> Puntatore: variabile che indica l'indirizzo di un'altra variabile
 *
 *  => Puntatori costanti e Puntatori a variabili costanti
 *      -> int const * (o const int*) = puntatore a un intero costante
 *          (puntatori interi non possono puntare a interi costanti)
 *          (puntatori interi costanti possono puntare a interi costanti)
 *      -> int* const è un puntatore costante che punta a una variabile intera
 *
 *  Lettura da destra a sinistra è way-to-go per la lettura di variabili
 *      int const * (puntatore a intero costante)
 *      int * const (costante puntatore a intero)
 *      int const * const (costante puntatore a intero costante)
 *      int ** const (costante puntatore a puntatore intero)
 *      int * const * (puntatore a costante puntatore a intero)
 *      int * const * const (costante puntatore a costante puntatore a intero)
 *      .. giochi di puntatori a puntatori, costanti e permutazioni varie
 *
 * REFERENCE:
 * Puntatori indicano indirizzo di memoria di un'altra variabile
 * Reference sono un riferimento alla variabile come esistenza
 *
 * "type& var" nella dichiarazione rende la variabile come "reference", ovvero un riferimento a un'altro intero
 *  => var, se modificato, cambia la variabile a cui fa riferimento direttamente
 *
 *  -> punatore si copia l'indirizzo di memoria (il quale viene dereferenziato per modifiche, ma in funzioni, gli argomenti sono copie)
 *  -> reference chiama direttamente la variabile (la quale potrà poi essere modificata, es: nelle funzioni modificherà la var senza salvare copie temporanee)
 *
 * Reference più semplici dei puntatori in termini di modifica e lettura del codice
 *  -> Permette di ottimizzare la memoria
 *  -> Non permette di modificare l'indirizzo di memoria
 *
 *  Array type[]: per una funzione (tramite puntatore), si chiama l'argomento type*
 *      -> Modifica tramite var[index] (oppure *(var+2))
 *      -> Modifiche sull'argomento modifica solo la copia dell'array
 *  Array type[]: per una funzione (tramite reference), si chiama type* &
 *      -> Maggior rischio nell'utilizzo:
 *          - la chiamata type*& var permette di accedere all'array direttamente senza copie
 *          - ogni modifica su var agisce anche sulla variabile originale (diventa un problema di accesso)
 *      -> Migliore uso di variabili e velocità di accesso
 *
 * Modifica di un puntatore tramite:
 *  - function(type** var)<- type** var {} per la modifica del puntatore (*var accede al puntatore)
 *  - function(type*& var)<- type* var {} per la modifica del puntatore direttamente senza dereferenziare
 *
 * Uso "const" per evitare di modificare variabili
 *  -> un parametro di una funzione può essere reso "const" per chiamare la variabile direttamente (senza copie o dereferenziazioni)
 *      ma senza poterla modificare [INGEGNOSO!]
 *
 * Chiamata di array da funzione (type (&var)[length])
 *  -> Chiede un array UNICAMENTE di quella lunghezza "length"
 *
 * Esempio1:
 *  type* s;
 *  for (; *s != condizione; s++) -> attenzione a modificare s (esempio come variabile temporanea nelle funzioni)
 *
 *
 *
 */