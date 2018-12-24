//Maggiore tra 5 variabili usando un solo costrutto if a una via
#include <stdio.h>
int main () {
int a,b,c,d,f;
int Massimo=0;
printf("inserisci un valore\n");
scanf("%d",&a);
printf("inserisci un valore\n");
scanf("%d",&b);
printf("inserisci un valore\n");
scanf("%d",&c);
printf("inserisci un valore\n");
scanf("%d",&d);
printf("inserisci un valore\n");
scanf("%d",&f);
Massimo=a;
if (b>Massimo) Massimo=b; 
if (c>Massimo) Massimo=c;
if (d>Massimo) Massimo=d;
if (f>Massimo) Massimo=f;
printf ("Il maggiore tra i 5 valori e' %d\n",Massimo);
return 0;
}