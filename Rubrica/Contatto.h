#ifndef CONTATTO_H
#define CONTATTO_H

struct coordinate{
  char citta[20];
  char provincia[15];
  int CAP;
  char via[30];
  long int numero;
};

struct contatto{
  char nome[25];
  char cognome[20];
  long long int telefono;
  char email[30];
  struct coordinate indirizzo;
};

struct contatto inserisci_contatto();

void stampa_contatto(struct contatto);

struct coordinate inserisci_indirizzo();

//char *stampa_indirizzo(struct contatto);

#endif
