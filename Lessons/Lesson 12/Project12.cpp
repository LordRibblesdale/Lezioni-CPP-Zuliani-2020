/* << operatore "put"
 * http://www.tutorialspoint.com/cplusplus/cpp_overloading.htm
 *
 * void operator++() se ++ a SX; void operator++(int) se ++ a DX
 *
 * type operator++(int) {
 *    type a = *this;
 *    ++*a;
 *    return *this;  // non cambia immediatamente
 * }
 *
 * E' possibile chiamare un metodo "friend type function(..)" per permettere alla funzione di accedere a variabili private
 *
 * Ereditarietà
 *    -> Classe -> Nuova classe con variabili/funzioni in comune (facendo ereditare le proprietà)
 *    -> Classe astratta: Classe che dichiara funzioni senza implementazione, costringendo sottoclassi di implementazione
 *       ||-> Una classe astratta non può essere istanziata in oggetti
 *
 * protected: accesso a variabili della superclasse a sottoclassi, senza accesso diretto da parte di altri blocchi di codice
 * private: accesso non permesso a sottoclassi
 * public: accesso publico a ogni parte del codice
 *
 * Classe astratta prevede funzioni del tipo "virtual type function(..) = 0", diventando astratta tramite = 0
 *
 * Estensione -> class Name : public Superclass (":" eredita classi)
 * |-> public permette al codice di far sapere la sua ereditarietà dalla superclasse
 * |-> private impedisce l'uso di funzioni della superclasse nel codice (poichè non sarà noto al codice esterno alla sottoclasse)
 *    |-> Utile per l'incapsulamento
 *
 * Polimorfismo (20min): proprietà di una classe di essere sia se stessa sia la superclasse
 * |-> Identificazione di sottoclassi come la superclasse (accedendo solo alle informazioni della superclasse)
 * |-> Accesso alla sottoclasse tramite cast?
 * |-> Polimorfismo NON FUNZIONA su variabili istanziate nella stack (solo nella heap, solo puntatori)
 *    |-> Puntatore della superclasse vedrà solo le sue variabili note, ma non quelle della sottoclasse. Lo accetta lo stesso però a livello di puntatore
 *    |-> Nella stack, la memoria è fissata, le variabili/funzioni della sototclasse non possono essere inserite poichè memoria fissata
 *
 * Override di funzioni (aggiunta di funzionalità alla funzione, accedendo alla nuova funzione con stesos nome)
 * |-> Binding dinamico (funzioni stesso nome e stessa firma): uso della versione più "aggiornata" nonostante venga chiamato l'oggetto superclasse
 *       (aggiornato in senso di ereditarietà)
 *    => 1) uso "virtual": funzione sovrascrivibile
 *    => 2) uso "override": funzione che viene impostata per la sovrascrittura di una funzione preesistente nella superclasse
 *
 * Chiamare costruttore superclasse Class::Class() : SuperClass() {}
 * Chiamare distruttore: la chiamata è inversa (prima virtual ~Class(), poi ~SuperClass() -- virtual essenziale)
 * Chiamare funzioni superclasse: chiamata con virtual e override
 *
 * Cast di oggetti: (type) variable [interpretato come type]
 *
 * "final override" definisce l'ultima iterazione di override dalle classi (le sottoclassi non potranno più fare override di quella funzione)
 *
 * In caso di tipi fraintendibili/scambiabili, il metodo con stesso nome e argomenti diversi, che potrebbero essere fraintendibili, sembrano diversi
 * |-> allora va chiesto di usare "using Class::method()" per obbligare l'uso del metodo corretto
 *
 * In caso di definizione oggetti tramite tipo della superclasse, se non si implementa il binding dinamico, la funzione adibita all'override non verrà chiamata
 *    ma verrà chiamata la funzione della superclasse
 *
 * Array di oggetti
 * |-> Stack: type array[int]
 * |-> Heap: type* array = new type[int]
 * ||-> Problema di memoria fissa nella creazione dell'array, non può contenere sottoclassi con nome della superclasse per questioni di memoria
 * ||
 * V
 * Array di puntatori a oggetti per creare array di oggetti dinamici a partire dalla sottoclasse
 * (type* array[] invece di type array[]) se di dimension fissa
 * (type** array = new array**;
 *
 * Liberare la memoria di array di puntatori: uso di un ciclo per liberare ogni posizione (l'array non va liberato anch'esso SE non si trova nella heap)
 *
 * Esistono 4 tipi di cast
 *    -> dynamic_cast <new type> (expression) <==> permette fare upcast e downcast per passare tra sottoclassi e superclassi (controllando la compatibilità)
 *       (es: dynamic_cast<Weapon*> (&Character)); compatibilità permessa solo verticalmente tra superclassi e sottoclassi
 *       (restituisce il puntatore al cast oppure nullptr)
 *       (alcuni cast sono sintatticamente possibili, ma non c'è controllo logico e interpretativo dei dati)
 *    -> static_cast <new type> (expression) <==> permette fare upcast e downcast per passare tra sottoclassi e superclassi senza controllo di compatibilità
 *       (NON si controlla il cast, quindi sta al programmatore decidere se il cast è lecito)
 *       (cast più veloce rispetto a quello dinamico)
 *    -> reinterpret_cast <new type> (expression) <==> reinterpreta completamente il tipo
 *       (richiede maggiore cautela, per un cast noto da void* al puntatore)
 *       (non effettua controlli)
 *    -> const_cast <new type> (expression) <==> puntatore a variabile costante a un puntatore a variabile non costante (e viceversa)
 *       (in caso di utilizzo per funzioni o situazioni che richiedono la versione costante/non costante)
 *
 *
 */