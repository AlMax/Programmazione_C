#include <stdlib.h>
#include <stdio.h>
#include "Lifo.h"

struct entry *push(struct entry *s, int value){
  struct entry *p = (struct entry *)malloc(sizeof(struct entry));
  p->value = value;
  p->next = s;
  return p;
}

struct entry *pop(struct entry *stack){
  struct entry *prossimo = (struct entry *)malloc(sizeof(struct entry));

  if( stack->next == NULL )
    return NULL;

  prossimo = stack->next;
  stack->value = prossimo->value;
  stack->next = prossimo->next;
  return stack;
}

int top(struct entry *stack){
  if( stack != NULL )
    return stack->value;
  else
    return -1;
}

void print(struct entry *stack){
  printf("\nStampa stack:");
  if( stack == NULL ){
    printf(" Vuoto");
  }
  while( stack != NULL ){
    printf(" %i", stack->value);
    stack = stack->next;
  }
}
