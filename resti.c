/*

TUTORATO 2: Espressioni
=======================


Secondo esercizio: calcolo dei resti
------------------------------------

1) Completa il programma qui sotto in modo che determini quante monete
   e banconote di ciascun tipo (50, 20, 10, 5, 2, 1 euro) servono per
   comporre l'importo dato.  Suggerimento: l'operazione x % y calcola
   il resto della divisione di x per y.

2) Compila il programma con il comando:

   gcc -o resti resti.c

3) Esegui il programma con il comando:

   ./resti

4) Prova a cambiare l'importo per verificare che il programma funzioni
   indipendentemente dalla cifra da comporre.

  
*/
#include <stdio.h>


int main()
{
  int importo = 243; /* importo da convertire */
  int resto;
  int b50, b20, b10, b5, m2, m1;
            /* Completa la funzione main con i calcoli e le stampe. */
  resto=importo%50;// 46
  b50=importo/50;//1.ecc
  
  b20=resto/20;//2.ecc
  resto=resto%20;
  
  b10=resto/10;
  resto=resto%10;
  
  b5=resto/5;
  resto=resto%5;
  
  m2=resto/2;
  resto=resto%2;
  
  m1=resto/1;
  resto=resto/1;
  
  printf("l'importo e' %d\n %d banconote da 50\n %d banconote da 20\n %d banconote da 10\n %d banconote da 5\n %d monete da 2\n %d monete da 1\n", importo, b50, b20, b10, b5, m2, m1);
  

}
