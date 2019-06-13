#include <stdlib.h>
#include <stdio.h>
#include "Contatto.h"

int main(void){
  struct contatto c = inserisci_contatto();
  stampa_contatto(c);

  return 0;
}
