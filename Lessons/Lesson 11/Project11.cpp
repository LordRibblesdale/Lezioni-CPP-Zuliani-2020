/* Operatori (+, -, *, /, %, ++, --, >, <, >=, <=, ==, !=, &&, ||)
 * Operazioni BINARI tra variabili (somma, moltiplicazione, confronto booleano)
 * Operatori UNARI (++ e --)
 * Cast per cambiare il tipo di destinazione
 *
 * Wrapper (avvolgere, struttura che contiene una variabile, oggetto)
 *
 * Definizione PERSONALIZZATA degli operatori (Operator overloading)
 *
 * Overloading aggiunge una nuova firma alla funzione (aggiunge nuove funzionalità a funzioni o operatori chiamate con lo stesso tipo)
 * type1 operator_SYMBOL_(type2 var) {}  <-- tipo di dato da aggiungere (in base alle necessità)
 * |-> scelta del tipo finale da type1 (necessario nel caso di concatenare operazioni)
 *    |-> Fuori dalla classe,
 * |-> NOTA: non sto modificando l'oggetto originale se sono operatori che non modificano direttamente (+ - * /)
 *         : modifica possibile con (++ -- += -=)
 *         -> operator++() (++var) [prefix]
 *             (return *this) [modifica la variabile attuale e la restituisce]
 *         -> operator++(type)   [postfix]
 *             (return var) [var a = *this, copia variabile oggetto] (restituisce il valore precedente, poi somma, ma non mostrato)
 *
 * ostream& operator<< (ostream& output, __ (const type& a)) (definisce la stampa per oggetti)
 *
 * operator_symbol_(type1, type2...) ordina gli oggetti interessati nell'ordine di presenza rispetto all'operatore
 *
 * this (restituisce l'indirizzo di memoria)
 *
 * |-> Uso di const type& var per ottimizzare accesso (non modificabile)
 */