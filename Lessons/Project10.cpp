/* "inline" il codice viene copiato direttamente nel codice (uso per funzioni light, dato che dovranno essere compilate insieme)
 *
 * const dopo "nome funzione" vuol dire che non modifica nessuna variabile dell'oggetto
 * |-> funzioni const sono piu leggere, non accedendo a nessuna variabile dell'oggetto
 *
 * const type& (viene attribuita la variabile con riferimento, senza copiare ma in modo non modificabile, leggendolo come costante anche se non lo è)
 * |-> questione di ottimizzazione memoria con protezione all'oggetto/tipo passato
 * |-> esempio riferimento all'oggetto tramite reference ma con definizione di costante dal metodo/funzione
 *    |-> passare oggetto nella heap richiede dereferenziazione (*varObj e chiamata con Type& se in riferimento)
 *
 * Reference, se usata, chiede che l'oggetto sia dereferenziato dall'indirizzo nella heap
 *
 * Variabili statiche: variabile presente nella classe e non presenti nei singoli oggetti (quindi sono variabili in comune per tutte le variabili)
 * |-> costanti statiche (non modifificabili, uguali per tutti)
 * |-> non costanti statiche (la modifica è condivisa per ogni variabile
 * |-> accesso con Namespace::CONST_VAR
 *
 * Creazione variabili statiche non costanti (dichiarate negli header, MA inizializzate nei cpp)
 */