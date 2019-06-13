#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include "Contatto.h"

struct contatto inserisci_contatto(){
  struct contatto c;

  printf("\nInserisci il Nome: ");
  scanf("%s", &c.nome);

  printf("Inserisci il Cognome: ");
  scanf("%s", &c.cognome);

  printf("\nInserisci l'Indirizzo\n");
  c.indirizzo = inserisci_indirizzo();

  printf("\nInserisci il Telefono: ");
  scanf("%lld", &c.telefono);

  printf("Inserisci l'Email: ");
  scanf("%s", &c.email);

  return c;
}

void stampa_contatto(struct contatto c){
  printf("\nNome: %s, Cognome: %s, Indirizzo: via %s n%ld (%i), Numero: %lld, Email: %s\n", c.nome, c.cognome, c.indirizzo.via, c.indirizzo.numero, c.indirizzo.CAP,  c.telefono, c.email);
}

struct coordinate inserisci_indirizzo(){
  struct coordinate c;
  printf("Inserisci la Citta': ");
  scanf("%s", &c.citta);

  printf("Inserisci la Provincia: ");
  scanf("%s", &c.provincia);

  printf("Inserisci il CAP: ");
  scanf("%i", &c.CAP);

  printf("Inserisci la Via: ");
  scanf("%s", &c.via);

  printf("Inserisci il Numero Civico: ");
  scanf("%ld", &c.numero);

  return c;
}

/*char *stampa_indirizzo(struct contatto c){
  struct coordinate address = c.indirizzo;
  char *indirizzo = (char*) malloc(sizeof(char)*100);
  strcat(indirizzo, "Via ");
  strcat(indirizzo, address.via);
  strcat(indirizzo, " n");
  strcat(indirizzo, "" + address.numero);
  strcat(indirizzo, ", ");
  strcat(indirizzo, address.citta);
  strcat(indirizzo, " (");
  strcat(indirizzo, address.provincia);
  strcat(indirizzo, "), ");
  strcat(indirizzo, "" + address.CAP);
  strcat(indirizzo, ".");

  return indirizzo;
}*/
