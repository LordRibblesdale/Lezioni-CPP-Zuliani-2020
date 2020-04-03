/* Mappe: tabella di elementi, a cui si accede tramite una chiave (tramite la quale restituisce l'elemento)
 * (Struttura a grafo)
 *    -> l'ordine non è di interesse, dipende dal tipo di mappa
 *    -> creazione di una tabella std::map<type1, type2> [unordered]
 *       --> l'accesso a chiavi richiede che siano create, altrimenti le inizializza con valore 0 (o nullo (?))
 *    -> la mappa può essere di forme diverse
 *       ->> unordered
 *       ->> mappe a grafo
 *          -> utile per la ricerca (ricerca binaria per gli alberi binari con ordine di calcolo log(n)-> con albero uniforme)
 *    -> accesso ai valori tramite []
 *    -> inserimento di valori tramite std::map::value_type(key, obj)
 *    -> inserimento tramite coppia std::pair(key, obj)
 *    -> uso di accesso tramite iteratori e advance per accedere senza controlli nell'intera mappa
 *    -> iterator->first indica chiave, ->second indica oggetto
 *    -> uso iteratore per scorrere mappa
 *    -> uso di map.at(key) per controllare la presenza della chiave
 *    -> uso di map.find(key) se lo trova
 *
 * Unordered Maps: elementi nella mappa raggruppati
 *    -> ogni chiave, viene calcolato il suo valore hash, ad ogni hash corrisponde un oggetto (o meglio, un gruppo di oggetti)
 *       -> il valore hash dipende dalla chiave inserita
 *    -> nel caso della presenza di piu chiavi con lo stesso valore hash, viene aggiunto l'oggetto aggiuntivo nel gruppo dell'hash
 *    -> creazione tramite std::unordered_map<type1, type2> oppure std::unordered_map<type1, type2, type1hash>
 *       -> i gruppi sono definiti "bucket"
 *    -> presenza di contatore bucket_count per il numero di contenitori nella unordered_map (iteratore per ogni elemento del bucket)
 *    -> la chiave hash può essere un Functor, oppure tramite specializzazione di std
 *       --> accesso a namespace std (aggiunta nel namespace)
 *          ---> tramite template, si definisce la creazione di hashcode (tramite il tipo size_t) (esempio sequenza di bit)
 *             ----> override dell'operator()
 *          ---> operazioni tramite "shift", traslazione di valori binari (<< 1) (>> 1) (XOR)
 *       --> oppure uso di struct per l'override dell'operator()
 *    -> gestione memoria allocata tramite load_factor() e max_load_factor()
 *    -> rapido nella ricerca per l'uso di hash (valore binario)
 *       --> richiede corretta implementazione (ottimizza performance), però in caso di problemi crea riduzioni di prestazioni
 *
 * Calcolo BIT:
 *    -> dati definiti come bit 0 e/o 1
 *    -> 8 bit formano 1 byte
 *    -> sistema numerico con 2 valori (0, 1)
 *    -> sistema numerico calcolato "a*base^n"
 *       --> a*2^n => es: 11010 = 1*2^4 + 1*2^3 + 0*2^2 + 1*2 + 0
 *    -> operazioni
 *       --> SHIFT: traslazione a dx o sx delle cifre
 *          ---> 0010 >> 1 = 0001 ("divisione in base 2")
 *          ---> 0010 << 1 = 0100
 *       --> AND (return di matching valori tra numeri binari, presenza di simboli uguali)
 *          ---> 01010 & 10010 = 00111
 *       --> OR (return controllo della presenza di almeno un valore 1)
 *          ---> 011010 | 10110 = 11110
 *       --> XOR (exclusive OR, se è presente unicamente 1 e 0, se sono uguali è 0)
 *          ---> 010010 ^ 111010 = 101000
 *          ---> elaborazione di dati con "randomising" valori bilanciato
 *          ---> creazione rumore, dal valore in input (anche con piccola variazione, crea variazioni nell'hash molto grandi)
 *             ----> protezione accesso dati, poichè il passaggo inverso è difficile
 */