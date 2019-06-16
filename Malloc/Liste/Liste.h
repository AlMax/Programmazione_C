#ifndef LISTE_H
#define LISTE_H
#include <stdbool.h>

struct node{
 int value;
 struct node *next;
};

struct list{
 struct node *head;
};

struct list *new_list(); //per la creazione di una nuova lista, inizialmente vuota.

void insert_on_head(struct list *list, int value); //per l'inserimento del numero value in testa alla lista list

void insert_on_tail(struct list *list, int value); //per l'inserimento del numero value in coda alla lista list

void print_list(struct list *list); //che stampa, procedendo dalla testa verso la coda, il contenuto della lista list

bool contains(struct list *list, int value); //che verifica se il numero value è presente nella lista list

void remove_from_list(struct list *list, int value); //che elimina il nodo della lista list contenente il valore value.
//NB: la lista può contenere valori duplicati, in questo caso uno solo dei nodi deve essere eliminato.

void empty_list(struct list *list); //che svuota l'intera lista list

#endif
