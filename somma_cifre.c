//somma cifre di un numero 
#include <stdio.h>
int main () {
int numero,cifra1,cifra2,cifra3;
printf("inserisci il numero di 3 cifre\n");
scanf("%d",&numero);
if (numero < 0 || numero > 999) printf ("Sai leggere?");
cifra3=numero%10;
numero/=10;
cifra2=numero%10;
numero/=10;
cifra1=numero%10;
printf("La somma delle cifre e' %d",cifra1+cifra2+cifra3);
return 0;
}