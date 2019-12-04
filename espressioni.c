/***********************************************************************
 * 
 * TUTORATO 2: Espressioni
 * =======================
 * 
 * 
 * Primo esercizio: conversione tra valute
 * ---------------------------------------
 * 
 * 1) Completa il programma qui sotto in modo che effettui la conversione
 *    Euro -> Dollari e che stampi i due importi (1 Euro = 1.18213 dollari).
 * 
 * 2) Compila il programma con il comando:
 * 
 *    gcc -o conversione conversione.c
 * 
 * 3) Esegui il programma con il comando:
 * 
 *    ./conversione
 * 
 ***********************************************************************/
#include <stdio.h>


int main()
{
   
  float euro=1982;
  float dollari;
  float coeff_scambio=1.821563;
    
  dollari= coeff_scambio*euro;
  printf("Lo scambio di %f euro e' %f dollari\n", euro, dollari);

  /* Completa la funzione main con la conversione e la stampa del risultato. */
}

