/* Copie in memoria per oggetti: in caso di duplicazione di oggetti tramite copy constructor
 * Copy constructor definisce le modalità di duplicazione di un oggetto
 *
 * Class(const Class& obj) {}
 *
 * Class obj1 = Class();
 * Class obj2 = Class();
 *
 * Class obj1 = obj2;
 * Class obj1 = Class(obj2);
 *
 * L'uso non è pericoloso in caso di classi semplici
 * L'uso è complesso per classi più complesse (esempio classi con oggetti che necessitano di essere duplicate)
 *    (in quel caso anche gli oggetti necessitano del copy constructor per la duplicazione)
 *
 * "memcpy(newElement, oldElement, byteSize); per copiare direttamente le informazioni nell'indirizzo di memoria
 *    -> Può richiedere l'intervento dell'utente per definire la lunghezza della memoria da copiare
 *
 * Similitudine tra copy constructor e copy assignment (assegnazione di un oggetto a un altro oggetto)
 * Copy assignment effettuato tramite Class operator=(Class obj) {... return *this;}
 *    (per correggere o evitare problemi di perdita di puntatori o di overload della memoria)
 *    (es: delete oggetto vecchio dell'oggetto già istanziato)
 *
 * Class operator=(Class obj) {... return *this;}
 *
 * Class obj1 = Class();
 * Class obj2 = Class();
 * obj1 = obj2;
 */