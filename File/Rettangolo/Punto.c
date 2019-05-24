#include <stdio.h>
#include <stdbool.h>
#include "Punto.h"

struct punto inserisci_punto(){
  struct punto p;

  printf("Inserisci l'ascissa: ");
  scanf("%d", &p.ascissa);

  printf("Inserisci l'ordinata: ");
  scanf("%d", &p.ordinata);

  return p;
}

void stampa_punto(struct punto p){

  printf("L'ascissa: %d \t", p.ascissa);

  printf("L'ordinata: %d \t", p.ordinata);

}

bool equals_punti(struct punto a, struct punto b){
  if( a.ascissa == b.ascissa && a.ordinata == b.ordinata )
    return true;
}
