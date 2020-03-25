/* Smart Pointers: nuovo tipo di puntatori
 *    - Ottimizzazione uso puntatori: gestione automatica della deallocazione
 *    - Nella libreria <memory> di C++
 *    - Due tipi di pointer
 *       -> unique_ptr<type> : altri puntatori non possono far riferimento all'oggetto
 *       -> shared_ptr<type> : più puntatori possono far riferimento allo stesso oggetto
 *                             (tiene nota dei puntatori a cui fanno riferimento all'oggetto)
 *                             (automaticamente dereferenzia la memoria dell'oggetto allegato se non c'è piu nessun puntatore collegato)
 *
 * Creazione tramite
 *    -> shared_ptr<type> name(new type(...))
 *    -> shared_ptr<type> name = std::make_shared<type>(...) <- stessi argomenti che verrebbero dati all'oggetto
 *
 * Accesso tramite classica dereferenziazione
 * Deallocazione di uno smart pointer tramite obj.reset()
 * Spostamento di oggetti tramite move possibile richiamando std::move(..)
 *
 * unique_ptr non permette copie, quindi l'accesso è obbligato tramite riferimenti
 *
 * Obiettivo di usare il meno riferimento a puntatori classici possibili (per evitare duplicazioni e uso nella memoria)
 */