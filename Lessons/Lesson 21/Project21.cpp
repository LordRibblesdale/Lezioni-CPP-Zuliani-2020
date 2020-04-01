/* XML linguaggio a marcatori (non di programmazione), descrive strutture di dati
 *    -> Creazione di radice, nodi, figli e fratelli, con loro attributi
 *    -> Esempio HTML è un derivato
 *
 * Creazione e importazione librerie:
 *    -> importazione con #include
 *    -> creazione di librerie (insieme di funzioni, da importare in più progetti)
 *       1) file header, per importare direttamente nella compilazione
 *       2) static: la libreria viene compilata in anticipo in modo statico, quindi integrato nel programma
 *          -> file di tipo .a, con il file .h per includere funzioni
 *          -> linker necessita il nome "lib____.a" per il compilatore
 *          -> file .a compilato insieme al codice e inserito nell'eseguibile
 *       3) dynamic: la libreria non è inserito nell'eseguibile, sono file esterni all'interno della stessa cartella/sottocartella o cartella di default
 *          -> file .dll per Windows; file .so per Linux
 *          -> può essere usato da diversi programmi
 *          -> permette di ricompilare i file dll singolarmente, senza ricompilare il programma
 * Dipende dal sistema operativo e dal compilatore, quindi necessita lavoro
 *
 * 1) Cerco la libreria, sorgente o file precompilato
 * 2) Compilo la libreria
 * 3) Inserisco la libreria nel processo, tramite file header .h
 */