#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Liste.h"

int main(void){
  struct list *numeri = new_list();
  char inserimento[] = {"si"};
  int valore;

  while( !strcmp(inserimento, "si") ){
    printf("Inserisci un valore: ");
    scanf("%i", &valore);

    insert_on_tail(numeri, valore);

    printf("Vuoi inserirne un altro?[si/no]");
    scanf("%s", inserimento);
  }

  printf("\n");
  print(numeri);

  return 0;
}
