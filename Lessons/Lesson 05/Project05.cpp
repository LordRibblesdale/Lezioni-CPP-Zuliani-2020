//
// Created by Green on 04/03/2020.
//

/* Creazione di array con dimensione da variabile richiede "new type[var]"
 * ^-- hardcoded sarà la variabile per la dimensione, deciso in fase di compilazione
 *
 * Memoria divisa in due tipi:
 *  -> Stack: memoria ad accesso più rapido dal programma ma piccola
 *  -> Heap: memoria condivisa dal sistema operativo, più lenta ma è la memoria di sistema
 *      ^-- NECESSITA di essere liberata nel caso di non utilizzo
 *           per evitare di sovraccaricare la memoria di sistema (quindi liberata allo spegnimento)
 *           MEMORY LEAK
 *
 * alloc + malloc viene esteso da "new" in C++, calcolando velocemente la memoria in byte
 * "new" crea memoria dalla Heap, su richiesta.
 * "delete" elimina dalla memoria heap la variabile
 * "delete[]" elimina dalla memoria heap l'array
 */