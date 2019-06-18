#include "liststring.h"
#include <stdlib.h>
#include <stdio.h>

struct list *construct_list_from_string(const char *s){
  struct list *head = NULL;
  struct list *lista = (struct list *)malloc(sizeof(struct list));
  int i = 0;

  while( s[i] != '\0' ){
    lista->head = s[i];

    if( s[i+1] == '\0')
      lista->tail = NULL;
    else
      lista->tail = (struct list *)malloc(sizeof(struct list));

    //printf("head:%c ", lista->head);

    if( i==0 ){
      head = lista;
    }

    lista = lista->tail;
    i++;
  }

  //printf(" %i", head->tail->tail->tail->tail == NULL);

  return head;
}

void print_list(struct list *l){
  struct list *list = l;
  if (list == NULL){
    return;
  }else{
    printf("%c ", list->head);
    print_list(list->tail);
  }
}

struct list *doppie(struct list *this){
  struct list *doubles;
  struct list *nextD;
  struct list *headD = NULL;
  struct list *attuale = this;
  struct list *next = attuale->tail;

  while( next != NULL ){
    /*printf("this:%c ,next:%c\n", attuale->head, next->head);*/

    if( attuale->head == next->head ){

      if( headD != NULL ){
        /*printf("PRIMA doubles:%c ,nextD:%c\n", doubles->head, nextD->head);*/
        nextD->tail = (struct list *)malloc(sizeof(struct list));
        doubles = nextD->tail;
      } else {
        doubles = (struct list *)malloc(sizeof(struct list));
      }

      doubles->head = attuale->head;

      doubles->tail = (struct list *)malloc(sizeof(struct list));
      nextD = doubles->tail;
      nextD->head = next->head;

      if( headD == NULL ){
        headD = doubles;
      }
      /*printf("doubles:%c ,nextD:%c\n", doubles->head, nextD->head);*/
      /*printf("    headD:%c\n", headD->tail->head);*/
      attuale = next;
      next = next->tail;
    }
    if( next == NULL ){
      break;
    } else {
      attuale = next;
      next = next->tail;
    }

  }
  nextD->tail = NULL;
  /*printf("headD finale:%c\n", headD->head);*/

  return headD;
}
