//Maggiore tra 2 variabili usando un solo costrutto if a una via
#include <stdio.h>
int main () {
int a,b;
int massimo=0;
printf("inserisci un valore\n");
scanf("%d",&a);
printf("inserisci un valore\n");
scanf("%d",&b);
massimo=a;
if (b>massimo) massimo=b;
printf ("Il maggiore tra i 2 valori e' %d\n",massimo);
return 0;
}