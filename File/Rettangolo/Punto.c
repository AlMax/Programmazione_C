#include <stdio.h>
#include <stdbool.h>
#include "Punto.h"

struct punto inserisci_punto(){
  struct punto p;

  printf("Inserisci l'ascissa: ");
  scanf("%lf", &p.ascissa);

  printf("Inserisci l'ordinata: ");
  scanf("%lf", &p.ordinata);

  return p;
}

void stampa_punto(struct punto p){

  printf("L'ascissa: %lf \t", p.ascissa);

  printf("L'ordinata: %lf \t", p.ordinata);

}

bool equals_punti(struct punto a, struct punto b){
  if( a.ascissa == b.ascissa && a.ordinata == b.ordinata )
    return true;
}
