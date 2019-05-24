 #include <stdio.h>
 #include <stdlib.h>

 #include "Punto.h"
 #include "Rettangolo.h"

 int main(void){
   struct punto p1, p2, p3, p4;
   struct rettangolo r1, r2;

   p1 = inserisci_punto();
   p2 = inserisci_punto();
   r1 = crea_rettangolo(p1, p2);

   printf("\n %i %i", (r1.max.ascissa - r1.min.ascissa), (r1.max.ordinata - r1.min.ordinata));

   for( int i = 0 ; i < (r1.max.ascissa - r1.min.ascissa) ; i++ ) {
     for( int j = 0 ; j < (r1.max.ordinata - r1.min.ordinata) ; j++ ) {
       printf("**");
     }
     printf("\n");
   }

   /*p4 = inserisci_punto();
   p3 = inserisci_punto();
   r2 = crea_rettangolo(p3, p4);

   printf("Il rettangolo r2 e' incluso in r1? %s", include(r1, r2) ? "True" : "False" );*/

 }
