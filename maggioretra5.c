//Maggiore tra 5 variabili usando un solo costrutto if a una via
#include <stdio.h>
int main () {
int a,b,c,d,e;
int massimo=0;
printf("inserisci un valore\n");
scanf("%d",&a);
printf("inserisci un valore\n");
scanf("%d",&b);
printf("inserisci un valore\n");
scanf("%d",&c);
printf("inserisci un valore\n");
scanf("%d",&d);
printf("inserisci un valore\n");
scanf("%d",&e);
massimo=a;
if (b>massimo) massimo=b; 
if (c>massimo) massimo=c;
if (d>massimo) massimo=d;
if (f>massimo) massimo=e;
printf ("Il maggiore tra i 5 valori e' %d\n",massimo);
return 0;
}