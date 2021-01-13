/*Questo programmma effettua il calcolo del fattoriale*/

#include <stdio.h>
#include <math.h>
/*prototipi*/
int scegli_opzione(void);
int leggi_intero(void);
int fattoriale (int);
int stampa_fattoriale(int, int);

/*inizio main*/
int main(void)
{
int opzione, fact, intero, temp=1;
do
{
opzione=scegli_opzione();
switch(opzione){
case 0: temp=0; break;
case 1: intero=leggi_intero(); fact=fattoriale(intero); stampa_fattoriale(fact, intero);
break;
}
}while(temp);
return 0;
}/*fine main*/

int scegli_opzione(void)
{
int flag;
char risposta;
do
{
printf("Questo programma calcola il fattoriale di un numero\n");
printf("Che opzione scegli? (F)Fattoriale or (U)Uscita\n");
scanf("%s", &risposta); //lo leggo come stringa e lo metto dentro risposta
switch (risposta){
case 'F':flag=1; break;
case 'U':flag=0; break;
default: printf("Hai Sbagliato! Riprova\n"); flag=-1;
break;
}
}while(flag==-1);
return (flag);
}

int leggi_intero(void)
{
double numero, vint, vreal;  //vint: parte intera, vreal= parte decimale
do
{
printf("Inserisci un intero >=0\n");
scanf("%lf", &numero);
vreal=modf(numero,&vint); //la funzione modf prende un double e separa la parte intera dalla parte decimale, restituisce due valori
if (numero>=0&&vreal==0)
break;
else
printf("Hai Sbagliato! Riprova\n");
}while(1);
return(int(vint));
}

int fattoriale(int n)
{
int temp;
if(n==0)
return (1); //il fattoriale di 0 è 1
else
for(temp=1;n>=1;n--)  
temp=temp*n;
return(temp);
}

int stampa_fattoriale (int fact, int intero)
{
printf("Il fattoriale di %d è %d : \n", intero, fact);
return 0;
}
