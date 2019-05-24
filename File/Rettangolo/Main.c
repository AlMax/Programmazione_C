 #include <stdio.h>
 #include <stdlib.h>

 #include "Punto.h"
 #include "Rettangolo.h"

 int main(void){
   struct punto p1, p2, p3, p4;
   struct rettangolo r1, r2;

   printf("\n");
   p1 = inserisci_punto();
   p2 = inserisci_punto();
   r1 = crea_rettangolo(p1, p2);

   printf("\nRettangolo r1\n");

   for( int i = 0 ; i <(r1.max.ordinata - r1.min.ordinata) ; i++ ) {
     for( int j = 0 ; j < (r1.max.ascissa - r1.min.ascissa) ; j++ ) {
       printf("* ");
     }
     printf("\n");
   }

   printf("\n");
   p4 = inserisci_punto();
   p3 = inserisci_punto();
   r2 = crea_rettangolo(p3, p4);

   printf("\nRettangolo r2\n");

   for( int i = 0 ; i <(r2.max.ordinata - r2.min.ordinata) ; i++ ) {
     for( int j = 0 ; j < (r2.max.ascissa - r2.min.ascissa) ; j++ ) {
       printf("* ");
     }
     printf("\n");
   }

   printf("\n%s", include(r1, r2) ? "Il rettangolo r2 e' incluso in r1" : "Il rettangolo r2 NON e' incluso in r1" );
   printf("\n%s\n", equals_rettangoli(r1, r2) ? "Il rettangolo r1 e' uguale ad r2" : "Il rettangolo r1 NON e' uguale ad r2" );

 }
