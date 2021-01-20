/* leggere un elenco di valori reali e ristamparlo al contrario*/

#include <stdio.h>
#define NUMEL 25
int main (void)
{
double valori[NUMEL];
int i;
for (i=0; i<NUMEL; i++)
scanf("%lf", &valori[i]);
for (i=NUMEL-1; i>=0; i--)
printf("Valore %d: %f\n", i, valori[i]);
return 0;
}
