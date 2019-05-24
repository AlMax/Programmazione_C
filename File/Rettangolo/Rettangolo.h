#ifndef RETTANGOLO_H
#define RETTANGOLO_H

#include <stdbool.h>
#include "Punto.h"

struct rettangolo {
  struct punto min; //Vertice in basso a sinistra
  struct punto max; //Vertice in alto a destra
};

struct rettangolo crea_rettangolo(struct punto a, struct punto b);

bool include(struct rettangolo this, struct rettangolo that);

bool equals_rettangoli(struct rettangolo this, struct rettangolo that);

#endif
