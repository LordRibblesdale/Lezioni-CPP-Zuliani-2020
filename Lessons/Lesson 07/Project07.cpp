/* Utilizzo di file "header" - File di intestazione
 *  - Uso per più files nel progetto, l'header richiama le funzioni (poichè il compilatore non sa cosa ci sia nei files
 *  - Inclusione nel progetto creando "file.h" e chiamandoli con "#include "file.h"" (non essendo libreria standard, non si chiama con <>)
 *  - Necessità per questioni di ottimizzazione tempi
 *
 * Elenco delle funzioni nel file header
 *      type function(..);
 *      type function2()....
 *
 * Permette di chiedere l'indicizzazione delle funzioni nel progetto, cercandolo in altri file *.cpp
 * Avverte il main della "forma" delle funzioni
 *
 * ----------------------------------------------------------------------------------------------------------------------------------------
 * Makefile
 *
 * Permette la compilazione dei file
 *
 * File "makefile"
 * Comando "make" per richiamare il file "makefile"
 *
 * # all come target (ovvero singole azioni da aggiungere a un makefile)
 * all:
 *  g++ file1.cpp file2.cpp ... -o object_filename
 *  ^- tab fa comprendere da eseguire nel terminale
 *  -> -o crea l'eseguibile
 *
 *  -----
 *  |->
 *      CC = g++    # definisce il comando di compilazione
 *      DEBUG = -g -std=c++20 # aggiunge simboli extra al codice per il debugging
 *      CFLAGS = -Wall -c $(DEBUG)  # flag per la compilazione; -Wall (Warnings all) attiva tutti i warnings
 *      LFLAGS = -Wall $(DEBUG) # flag per il linking
 *      ODIR = obj/
 *      SASDIR = obj/sas/
 *
 *      DEPS = functions.h
 *
 *      ## riscrittura delle info sottostanti con le variabili create sopra
 *      ## E' possibile organizzare i file *.o da distribuire nelle cartelle con "folder/file.o"
 *
 *      all: exec
 *
 *      exec: main.o file.o file2.o ....   # attende la compilazione file
 *          g++ (da aggiungere flags) main.o file.o file2.o
 *      exec: obj/main.o ($(ODIR)main.o) obj/sas/file.o obj/sos/file2.o ....   # attende la compilazione file
 *
 *      main.o: main.cpp    # denota la dipendenza, controlla se presenta modifiche
 *          g++ -c main.cpp # -c non crea il link, ma solo il file object
 *
 *      file.o: file.cpp
 *          ... #idem
 *
 *      # per non ripetere le stesse cose per alcuni file
 *      # % fa riferimento ad alcuni file di un certo tipo
 *
 *      $(ODIR)%.o : %.cpp $(DEPS)  # $(DEPS) farà ricompilare tutti i file legati all'header
 *          $(CC) $(CFLAGS) -o $@ $<
 *
 *      # comando creato personalmente
 *      clean:
 *          # cancella file in base al comando del sistema operativo
 *          # chiamato solo col comando "make clean", poichè exec non lo contiene
 *
 * Linking: fase di collegamento dei vari file, creando un unico file eseguibile
 * Obiettivo: compilare separatamente alcuni files rispetto a compilare tutto
 *  ->
 */