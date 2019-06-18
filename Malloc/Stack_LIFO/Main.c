#include "Lifo.h"
#include <stdlib.h>
#include <stdio.h>

int main(void){
  struct entry *lifo = NULL;
  lifo = push(lifo, 5);
  lifo = push(lifo, 10);
  lifo = push(lifo, 15);
  lifo = push(lifo, 20);
  lifo = push(lifo, 100);
  print(lifo);
  printf("\nValore in cima: %i\n", top(lifo));

  lifo = pop(lifo);
  print(lifo);
  printf("\nValore in cima: %i\n", top(lifo));

  lifo = pop(lifo);
  print(lifo);
  printf("\nValore in cima: %i\n", top(lifo));

  return 0;
}
