#include <stdio.h>
#include <stdlib.h>

int divisione(int, int);

int main(void){
  int numeratore, denominatore;

  printf("Inserisci il numeratore: " );
  scanf(" %i", &numeratore);
  printf("Inserisci il denominatore: " );
  scanf(" %i", &denominatore);

  printf("La divisione e': %i", divisione(numeratore,denominatore));

}

int divisione(int n, int d){
  if ( n < d ){
    return 0;
  } else {
    return 1 + divisione( (n-d), d);
  }
}
