//Le 5 operazioni 
#include <stdio.h>
int main () {
int a,b,Somma,Differenza,Prodotto,Quoziente,Resto;
printf ("Inserisci il primo elemento\n");
scanf("%d",&a);
printf ("Inserisci il secondo elemento\n");
scanf("%d",&b);
Somma=a+b;
Differenza=a-b;
Prodotto=a*b;
Quoziente=a/b;
Resto=a%b;
printf ("La somma tra i 2 addendi e' %d \n",Somma);
printf ("La differenza tra minuendo e sottraendo e'%d \n",Differenza);
printf ("Il prodotto tra i 2 fattori e'%d \n",Prodotto);
printf ("il quoziente tra dividendo e divisore e' %d \n",Quoziente);
printf ("Il resto o modulo della divisione e' %d \n",Resto);
return 0;
}