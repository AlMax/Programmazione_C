#include <stdlib.h>
#include <stdio.h>
#include "Liste.h"

struct list *new_list(){
  struct list *list = (struct list *)malloc(sizeof(struct list));
	list->head = NULL;

	return list;
}

void insert_on_head(struct list *list, int value){
  struct node *node = (struct node *)malloc(sizeof(struct node));

  /*printf("Inserisci un valore: ");
  scanf("%i", node->value);*/
  node->value = value;
	node->next = list->head; //Il nodo 2 riceve il contenuto del nodo testa
	list->head = node; //Il nuovo nodo va in testa
}

void insert_on_tail(struct list *list, int value){
  struct node *node = (struct node *)malloc(sizeof(struct node));

  node->value = value;
  node->next = NULL;

  struct node *n = list->head;

  while( n != NULL){
    n = n->next;
  }

  n = node;
}

void print(struct list *list){
  if(list->head == NULL){
		printf("La lista e' vuota\n");
		return;
	}

  printf("Stampa della lista: ");
	struct node *attuale = list->head;
	while(attuale != NULL){
		printf("%i ", attuale->value);
		attuale = attuale->next;
	}
	printf("\n");
}
