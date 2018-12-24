//Maggiore tra 2 variabili usando un solo costrutto if a una via
#include <stdio.h>
int main () {
int a,b;
int Massimo=0;
printf("inserisci un valore\n");
scanf("%d",&a);
printf("inserisci un valore\n");
scanf("%d",&b);
Massimo=a;
if (b>Massimo) Massimo=b;
printf ("Il maggiore tra i 2 valori e' %d\n",Massimo);
return 0;
}