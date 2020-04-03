/* Puntatori di funzioni
 *    -> richiamo dell'indirizzo del puntatore della funzione tramite "function", invece di "function()"
 *       -> come se () fosse una dereferenziazione delle funzioni
 *    -> creazione di puntatore alla funzione
 *       -> type (*pointerName)(type arguments,...)
 *    -> chiamata in argomento di una funzione è possibile chiamare una funzione
 *       -> delegare il richiamo di una funzione a un'altra funzione (se necessario)
 *
 * Functors (Function Objects): oggetti usati come funzioni
 *    -> Creazione funzione nomeOggetto(type arg...) per override operator
 *    -> Per far persistere valori nella memoria
 *    -> Uso per diverse funzioni con diversi valori, per essere richiamato da un'altra funzione
 */