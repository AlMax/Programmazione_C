#ifndef PUNTO_H
#define PUNTO_H
#include <stdbool.h>

struct punto {
  double ascissa; //x
  double ordinata; //y
};

struct punto inserisci_punto(void);

void stampa_punto(struct punto);

bool equals_punti(struct punto, struct punto);

#endif
