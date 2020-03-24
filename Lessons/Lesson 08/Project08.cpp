/* Struct (Structure) e Class (Classi)
 * Struct: struttura di dati (per raggruppare variabili), ognuna con le proprie variabili (saranno pubbliche e accessibili, definibili come private)
 * Classi: come le struct, ma le classi imposta i modificatori di accesso PRIVATE di default (ma specificabili come pubbliche)
 *
 * Structs e class INTERSCAMBIABILI in C++
 *
 * "struct" nome chiave
 *
 * struct SimpleCharacter {
 *  variable;
 *  variable2;
 *
 *  SimpleCharacter() {}    // Costruttore, con lo stesso nome della struct, inizializzatore dello struct
 *  SimpleCharacter(..) {}
 *  SimpleCharacter(..) : variable(a), variable2(b), .... {}
 * }; <- punto e virgola
 *
 * "class" parola chiave
 *
 * class Character {
 *  char* string;
 *  variable;
 *  variable2;
 *
 *  public: //tutto ciò che si trova dopo, sarà publico
 *
 *  variable3;
 *  type* variable4;
 *
 *  Character* enemy;
 *
 *  Character() {}
 *  Character(type a, b.....) : variable(a), variable(b) {}
 *
 *  ~Character() {} // DISTRUTTORE, stesso scopo di delete, per distruggere un oggetto
 *      ** Verrà chiamato dal comando delete
 *      -> variabili impostate a 0
 *      -> delete dei puntatori e variabili nella heap, da ripulire nella memoria
 *      -> nullptr per i puntatori
 *      ** Attenzioni alle variabili dell'oggetto, da cancellare (ovviamente se non utilizzata)
 *  (se nella stack, viene automaticamente tutto eliminato quando fuori dalla scope)
 *  (se nella heap, va eliminato con delete)
 *
 *  // tutto kit di funzioni
 * }; <- punto e virgola
 *
 * Creazione di oggetto => creabile nella Stack (SimpleCharacter sas1 = SimpleCharacter(a, b, c, ...))
 *      -> Memoria precalcolata in base alle variabili presenti, unicamente numero limitato dalle dichiarazioni hard-coded
 * Creazione di oggetto => creabile nella Heap (SimpleCharacter* sas1 = new SimpleCharacter(a, b, c, ...))
 *      -> Ricordarsi di liberare la memoria delete sas1;
 *      -> Regola: ad ogni "new" un "delete"
 *
 * Accesso al valore dell'oggetto struct => structObject.variable (uso operatore ".") per oggetti nella STACK
 * Accesso al valore dell'oggetto struct => structObject->variable (uso operatore "->", dereferenzia usando ->, automaticamente) per oggetti nella HEAP
 * Accesso al valore dell'oggetto struct => (*structObject).variable (uso operatore ".", dereferenzia usando "*") per oggetti nella HEAP
 *  -> IMPORTANTE l'uso delle parentesi per limitare all'oggetto la dereferenziazione! (Altrimenti dereferenzia il valore variable del puntatore! Non ha campi)
 *  -> UsO dEl CoMaNdO dElEtE!1!1!
 *  -> Delete di unicamente variabili non accessibili ad altre variabili o di stringhe literal
 *
 * Uso ciclo infinito while (true) con condizione "break"
 * Condizione binaria = condizione ? a : b;
 *
 * Se si inizializza vettori (char*)"String" [LITERAL], questi sono automaticamente calcolati nel processo di garbage collection alla fine dell'esecuzione
 *  -> e non vanno eliminati col delete
 */