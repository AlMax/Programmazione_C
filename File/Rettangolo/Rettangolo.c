#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "Punto.h"
#include "Rettangolo.h"

struct rettangolo crea_rettangolo(struct punto a, struct punto b){
  struct rettangolo r;
  struct punto p;

  if( (a.ascissa > b.ascissa) && (a.ordinata > b.ordinata) ) {

    r.max = a;
    r.min = b;

  } else if ( a.ascissa > b.ascissa ) {

    p.ascissa = a.ascissa;
    p.ordinata = b.ordinata;
    r.max = p;

    p.ascissa = b.ascissa;
    p.ordinata = a.ordinata;
    r.min = p;

  } else if ( a.ordinata > b.ordinata ) {

    p.ascissa = b.ascissa;
    p.ordinata = a.ordinata;
    r.max = p;

    p.ascissa = a.ascissa;
    p.ordinata = b.ordinata;
    r.min = p;

  } else {

    r.max = b;
    r.min = a;

  }

  printf("Il vertice in alto a destra ha x=%.2lf e y=%.2lf, mentre il vertice in basso a sinistra ha x=%.2lf e y=%.2lf.", r.max.ascissa, r.max.ordinata, r.min.ascissa, r.min.ordinata);
  printf("\nLa larghezza e': %.2lf e l'altezza e': %.2lf", larghezza_rettangolo(r), altezza_rettangolo(r));

  return r;

}

bool include(struct rettangolo this, struct rettangolo that){
  if( ( (this.max.ascissa > that.max.ascissa) && (this.max.ordinata > that.max.ordinata) ) && ( (this.min.ascissa < that.min.ascissa) && (this.min.ordinata < that.min.ordinata) ) )
    return true;
  return false;
}

bool equals_rettangoli(struct rettangolo this, struct rettangolo that){
  if( ( (this.max.ascissa-this.min.ascissa) == (that.max.ascissa-that.min.ascissa) ) && ( (this.max.ordinata-this.min.ordinata) == (that.max.ordinata-that.min.ordinata) ) )
    return true;
  return false;
}

double larghezza_rettangolo(struct rettangolo this){
  return abs(this.max.ascissa - this.min.ascissa);
}

double altezza_rettangolo(struct rettangolo this){
  return abs(this.max.ordinata - this.min.ordinata);
}
