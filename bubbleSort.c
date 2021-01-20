/* 
* Legge una lista di interi terminata
* dal valore 0, la inserisce in un array
* ne fa l’ordinamento con bubblesort
* e infine stampa la sequenza ordinata
*/

#include <stdio.h>
#define MAXLIST 50  

//prototipi di funzione

int leggiLista(int lista[], int max);
void ordina(int lista[], int n);
void swap(int lista[], int i, int j);
int scorri(int lista[], int n);
void stampaLista(int Lista[], int n);

int main(void){
  int n, lista[MAXLIST]; //dichiaro il vettore, n per il numero di elementi letti
  n = leggiLista(lista, MAXLIST); 
  ordina(lista, n);
  stampaLista(lista, n);
  return 0;
}

int leggiLista(int lista[], int max){
  int n=0, val;
  printf("Immettere una sequenza di valori, 0 per terminare");
  while (n<max) {
    printf("Inserisci il prossimo valore: ");
    scanf("%d", &val);
    if (val == 0) break;
    lista[n] = val; //metto val dentro lista di n
    n++; 
  }
return n; //restituisce il numero di valori letti
}

//questa funzione richiama la funzione scorri lista finchè non ci sono più elementi da scambiare
//cioè quando la funzione scorri restituirà 0
void ordina(int lista[ ], int n){ 
  while (scorri(lista, n));
}

int scorri(int lista[], int n){
  int i, scambi=0;
  for (i=0; i<n-1; i++) {
    if (lista[i] > lista[i+1]){ //determina se l'elemento della lista è maggiore di quello successivo, 
      swap(lista, i, i+1); //in tal caso li scambia
      scambi=1; 
    }
  }
  return scambi;
}

//scambia i valori di indice i e i+1 in lista
void swap(int lista[], int i, int j)
{
  int temp;
  temp = lista[i]; 
  lista[i] = lista[j];  
  lista[j] = temp;  
}

void stampaLista(int lista[], int n){
  int i;
  for (i=0; i<n; i++){
    printf("Elementi lista ordinata:\n %d \n", lista[i]);
  } 
}
