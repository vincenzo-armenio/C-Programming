//Ricerca in un array

#include <stdio.h>
#define SIZE 100

//prototipo di funzione
int linearSearch(const int array[], int key, int size);

int main(void){

int a[SIZE];

	for (size_t x=0; x< SIZE; ++x){ //genera alcuni dati
		a[x] = 2*x; 
	}
	
	printf("Inserisci un valore da cercare: ");
	int searchKey;
	scanf("%d",&searchKey);
	
	//tenta di localizzare searchKey nell'aray a
	int index = linearSearch(a, searchKey, SIZE);
	
	//stampa i risultati
	if (index!= -1){
		printf("Ho trovato il valore in posizione %d\n", index);
	}
	else {
		puts("Valore non trovato");
	}
	
	
}

int linearSearch(const int array[], int key, int size){
	
		for(int n = 0; n < size; ++n){
			
			if(array[n] == key){
				return n; 	//restituisce la posizione della chiave
			}
		}
		
return -1;	//chiave non trovata
}
