#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
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

  if(list->head == NULL){
    insert_on_head(list, value);
  } else {
    struct node *attuale = list->head;
    while( attuale->next != NULL ){
      attuale = attuale->next;
    }
    attuale->next = node;
  }
}

void print_list(struct list *list){
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

bool contains(struct list *list, int value){
  struct node *n = list->head;
  while( n != NULL ){
    if( n->value == value ){
      return true;
    }
    n = n->next;
  }
  return false;
}

void remove_from_list(struct list *list, int value){
  struct node *attuale = list->head;
  struct node *precedente = NULL;
  while( attuale != NULL ){

    if( attuale->value == value ){

      if(attuale == list->head){
        list->head = attuale->next;
      } else {
        precedente->next = attuale->next;
      }
      free(attuale);

      return;
    }

    precedente = attuale;
    attuale = attuale->next;

  }
}

void empty_list(struct list *list){
  list->head = NULL;
}
