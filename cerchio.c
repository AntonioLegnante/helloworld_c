//Calcolo della superficie, della circonferenza del cerchio dato il raggio
#include <stdio.h>
int main () {
int Raggio;
double pi=3.14;
printf("Inserisci il raggio\n");
scanf("%d",&Raggio);
printf("Il diametro del cerchio vale %f\n", Raggio*2.0);
printf("La circonferenza del cerchio vale %f\n",Raggio*2.0*pi);
printf("La superficie del cerchio vale %f\n", pi*Raggio*Raggio);
return 0;
}