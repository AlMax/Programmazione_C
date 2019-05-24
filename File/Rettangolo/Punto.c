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
