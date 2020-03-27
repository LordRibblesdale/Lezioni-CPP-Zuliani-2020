/* Containers C++
 * -> Classi che permettono di gestire collezione di dati in maniera semplificata (esempio vectors)
 * -> Uso degli iteratori (iterator), esclusiva per la sua versione
 *
 * Vector<type> è un gestore automatico di lista/array dinamico
 *    -> gestisce puntatore all'elemento iniziale, finale, e l'ultimo aggiunto
 *    -> usano direttamente i copy/move constructor/operator per gli spostamenti di elementi
 *
 *    -> da includere tramite <vector>
 *    -> std::vector<type> name = {...} (aggiunge elementi)
 *    -> std::vector<type> name(capacity) // Capacità
 *    -> uso di iteratori per lo scorrimento dell'array
 *       --> uso operatore indexer (dereferenzia la posizione con l'indice, utile per arrays ma non per le liste)
 *       --> uso di iteratore per conservare il puntatore (nel caso di una lista per evitare di scorrere nuovamente la lista)
 *          ---> velocizza lo scorrimento dei contenitori
 *       --> name.begin() (iteratore della lista)
 *       --> name.insert(iterator, element) (viene restituito un iteratore come risultato, per aggiornare l'iteratore (non più valido attualmente))
 *          ---> solo gli iteratori a elementi precedenti sono validi a meno che l'array non viene esteso (ovvero ricreato un nuovo array)
 *          ---> successivi elementi richiedono nuovi iteratori/puntatori
 *          ---> se il contenitore è una lista, gli iteratori non cambiano tra gli elementi (a meno di eliminazione elementi)
 *       --> name.insert(iterator, nCopies, element) crea copie dell'oggetto
 *       --> name.insert(it+num [itetatore + num posizioni], vec.begin(), vec.end()) (aggiunge elementi tramite gli iteratori di un altro array)
 *       --> name.insert(it+num [itetatore + num posizioni], arr[num], arr[num2]) (aggiunge elementi tramite gli iteratori di un altro array)
 *    -> vec.pushback(unique/shared_ptr<type>(new type(..)) per aggiungere elementi
 *    -> vec.at(index) fa il controllo di accesso agli elementi ([] è piu rischioso)
 *
 * Iteratori: il loro spostamento con somme ++ -- += permettono di spostare iteratamente la posizione del puntatore
 *    -> ovvero possono avere Random Access (aggiunta di piu posizioni)
 *    -> possono essere bidirezionali o monodirezionali
 *    -> Attenzione alla validità
 *
 * For each per vector
 *    for (auto x : vector) {}
 *
 * Emplace: funzione di aggiunge/costruisce direttamente nel contenitore l'oggetto, invece di copiarli (coi copy constructor)
 *    -> bisogna passare gli attributi dell'oggetto da creare, direttamente negli argomenti (il costruttore verrà creato nel vector, senza copie)
 * Insert: funzione che aggiunge nel contenitore un oggetto duplicandolo, passando a insert l'oggetto
 *    -> è possibile spostare l'oggetto, direttamente con insert, con insert e std::move (sposta direttamente la memoria)
 *
 * Vector: utile per aggiungere dati in punti diversi dall'inizio e dalla fine
 *         utile per rimuovere elementi alla fine (tranne per riallocare l'intera memoria)
 *         piu veloce in generale per gestione elementi
 *
 * Liste [std::list<type> name = {}]
 *    -> spostamento nella lista tramite iteratori (non tramite derefenziatori di array)
 *    -> lettura iteratore tramite const_iterator
 *    -> iteratori sono bidirezionali ma si spostano unicamente di una posizione
 *       --> it.advance(num) avanza l'iteratore, con controllo
 *    -> std::forward_list (per una lista con iteratori monodirezionali)
 *    -> it = vector.erase(it)   (elimina l'elemento nella posizione)
 *    -> it = vector.erase(it, it2) (elimina gli elementi nell'intervallo (ultimo escluso)
 *
 * Liste: utile per accedere a elementi all'interno della lista, per evitare di lavorare su un array e spostare elementi
 *
 */