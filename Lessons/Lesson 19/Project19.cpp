/* Streams: flusso di dati da una sorgente a un ricevente
 * -> online streams, file streams, data streams (esempio: cout, cin)
 *
 * << : put - inserire nello stream (consente concatenazione)
 * >> : get - richiedere dati da inserire nello stream (consente concatenazione)
 *
 * cin legge valori interi, decimali, stringhe
 *    -> chiamando "cin" agisce sullo stream/funzione (?)
 *
 * cin.clear() pulisce gli errori dell'input (lo stato dello stream .fail())
 * cin.ignore(...) ignorare dati del flusso
 *    -> uso libreria <limits> per determinare limiti di file
 *
 * getLine(inStream, var) per ottenere una linea di testo
 *    -> inStream può essere cin o ifstream
 *
 * cout permette formattazione, precisione dei valori
 * cout << format
 * cout.precision
 *
 * ofstream (output file stream) permette l'output di dati
 * ofstream(folder, ios::app) per aggiungere dati
 * ifstream (input file stream) acquisice dati dall'esterno
 * ifstream(folder, ios::in)
 *
 * if (ifs) o ifs.isOpen()? legge la lettura
 *
 * while (stream) controlla se lo stream avrà errori (ciò ferma il ciclo)
 *
 * ostringstream, istringstream sono streams di stringhe, salvate o ottenute da variabili nella stack/heap
 *    -> questi servono solo per input, output
 *    -> stringstream serve per entrambi
 *    -> generalizzazione nomi per i vari strumenti di stream
 *
 * Override operatore ostream& operator<<(ostream& stream, const type& var)
 *                    istream& operator>>(istream& stream, type& var)
 *
 * Ogni volta alla fine dell'uso di uno stream, bisogna chiuderlo, con .close();
 *
 * Esempio: parser con lettura struttura dati
 *
 * // caratteri di escape lette dal testo
 * // stringhe raw non legge caratteri di escape
 */