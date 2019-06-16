#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
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
  print_list(numeri);

  printf("\nInserisci un numero per vedere se c'e': ");
  scanf("%i", &valore);
  printf("%s", contains(numeri, valore) ? "E' presente.\n" : "Non e' presente.\n");

  printf("\nInserisci un numero che vuoi eliminare: ");
  scanf("%i", &valore);
  remove_from_list(numeri, valore);
  print_list(numeri);

  printf("\nSvuotamento lista... ");
  empty_list(numeri);
  print_list(numeri);

  return 0;
}
