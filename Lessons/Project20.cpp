/* Eccezioni: estensione classe exception
 *    -> virtual const char* what const noexcept (noexcept non genera nessuna eccezione)
 *    -> throw lancia una eccezione
 *       -> qualsiasi file lancia eccezione
 *    -> catch intercetta eccezioni (E' OBBLIGATORIO intercettare eccezioni per evitare che ci siano problemi)
 *    => uso blocco try-catch
 *    -> possibile rilanciare altre eccezioni
 *
 * Container, tramite metodi appositi, generano eccezioni, che vengono intercettate tramite
 *    >> catch (exception& e) (exception& sfrutta il polimorfismo)
 *
 * // "..." variabile generica o array di valori
 *
 * ------------------------------------------------------------------------------------
 *
 * Template: classi e funzioni con tipi generalizzati, invece di precisa definizione
 *    -> da scrivere prima di una classe o di funzione
 *    -> template <...> (anche più argomenti)
 *    -> richiamare con name <...> () se richiede i tipi generici
 *       -> anche aggiungibili tipi primitivi i tipi con valori fissati (se non specificati nella creazione)
 *    -> esempio i vector e map, o contenitori in generale
 *    -> nome chiave "class" o "typename"
 *    -> Nota: funziona solo per il primo blocco di codice incontrato
 *       -> necessita di riscrittura
 *    -> il compilatore provvede a compilare metodi/classi generalizzate SOLO se ha un effettivo utilizzo, quindi non viene compilato in quel caso
 *       -> risolvibile scrivendo tutto nel file header (più usato)
 *       -> oppure scrivendo tutti i tipi che vogliamo utilizzare alla fine del codice cpp
 *          -> compila quindi per i tipi specificati
 * Template specialization: specializzazione di una classe/funzione
 *    -> override della specializzazione di un precedente template
 *       -> ATTENZIONE: non c'è una effettiva inheritance (eredità), quindi va riscritto tutto ciò che è sovrascritto
 *    -> descritto con template <>
 *                     class/type name <specificType>
 *
 * E' possibile reiterare i template per chiamare tipi generici diversi, e operare diverse azioni su diverse classi
 *
 * template< ...A >
 *
 * template< ...B >
 *
 * class<A> name(class<B>)
 *
 * Con richiamo dei tipi elaborati, sarà possibile aiutare il compilatore a dedurre i tipi
 * function <type1, type2>
 *
 *
 */