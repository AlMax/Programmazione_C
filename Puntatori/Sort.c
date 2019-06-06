#include <stdlib.h>
#include <stdio.h>

void sort(int *x, int *y, int *z);

int main(void){
  int x, y, z;

  printf("Inserire tre numeri interi separati da uno spazio: ");
  scanf("%i %i %i", &x, &y, &z);

  sort(&x, &y, &z);
  printf("Numeri ordinati: %i, %i, %i\n", x, y, z);

  return 0;
}

void sort(int *x, int *y, int *z){
  int s;
  for( int i = 0 ; i < 3 ; i++) {
    if( *x > *y ){
      s = *x;
      *x = *y;
      *y = s;
    }

    if( *y > *z ){
      s = *y;
      *y = *z;
      *z = s;
    }

    if( *x > *z ){
      s = *x;
      *x = *z;
      *z = s;
    }
  }
}
