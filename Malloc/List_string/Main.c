#include "liststring.h"
#include <stdlib.h>
#include <stdio.h>

int main(void){
  const char *pc = "Grrandeoo";

  struct list *lista = construct_list_from_string(pc);
  printf("Stampa lista: ");
  print_list(lista);
  printf("\nStampa lista doppie: ");
  print_list(doppie(lista));
  return 0;
}
