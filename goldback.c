/* La congettura di Goldbach afferma che "Ogni numero pari maggiore di 2 è somma di due numeri
primi" /*

#define INIZIO 22
#define FINE 144

int main(void)
{
  int k;
  printf("Ogni numero pari maggiore di 2 ");
  printf("e' somma di due primi?\n");
  for (k = INIZIO; k <= FINE; k+=2) //genero tutti i valori pari k compresi tra inizio e fine
  if (!stampa_linea(k)) break;
  if (k > FINE)
  printf("E' vero! Goldbach ha ragione\n ");
  else printf("No! Goldbach si sbaglia\n");
}

/*
* Function: stampa_linea
* Usage: stampa_linea(linea)
* -----------------------------------------
* Ritorna 0 e non stampa nulla se linea non puo'
* essere scomposto; stampa la scomposizione di
* linea e restituisce 1 se ciò e' possibile.
*/

int stampa_linea (int linea)
{
int scomp;
scomp = scomponi(linea);  
if (scomp == 0) return (0);
printf(“%d = %d + %d\n", linea, scomp, linea - scomp);
return (1);
}

/*
* Function: scomponi
* Usage: scomponi(linea)
* --------------------------------------------------
* Scompone linea in 'i' e 'linea-i' entrambi numeri
* primi e restituisce i. Se la scomposizione non e'
* possibile, ritorna 0.
*/

int scomponi (int linea)
{
int i = 3;
if (linea == 4) return 2;
while (i <=linea/2) {
if (primo(i) && primo(linea-i)) return i; i += 2;
}
return 0;
}

/*
* Function: primo
* Usage: primo(numero)
* ----------------------------------------------------
* Ritorna 1 se numero e' primo,
* 0 altrimenti.
*/

int primo (int numero)
{
int j;
if (numero == 2) return 1;
if (! numero % 2) return 0;
for (j = 3; j <=sqrt(numero); j += 2)
if (!(numero%j)) return 0;
return 1;
}
