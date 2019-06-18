#ifndef LIFO_H
#define LISTE_H

struct entry {
 int value;
 struct entry *next;
};

struct entry *push(struct entry *s, int value); //Aggiunge un nuovo valore value in cima allo stack corrente.
struct entry *pop(struct entry *stack); //Elimina l’elemento in cima allo stack corrente stack.
int top(struct entry *stack); //Restituisce il valore in cima allo stack corrente
void print(struct entry *stack);

#endif
