//somma cifre di un numero 
#include <stdio.h>
int main () {
int Numero,Cifra1,Cifra2,Cifra3;
printf("inserisci il numero di 3 cifre\n");
scanf("%d",&Numero);
if (Numero < 0 || Numero > 999) printf ("Sai leggere?");
Cifra3=Numero%10;
Numero/=10;
Cifra2=Numero%10;
Numero/=10;
Cifra1=Numero%10;
Numero/=10;
printf("La somma delle cifre e' %d",Cifra1+Cifra2+Cifra3);
return 0;
}