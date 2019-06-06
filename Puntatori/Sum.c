#include <stdlib.h>
#include <stdio.h>

void sum(double *s, double x, double y);

int main(void){
  double somma, x, y;
  printf("Inserisci due numeri seguiti da uno spazio: ");
  scanf("%lf %lf", &x, &y);
  sum(&somma, x, y);
  printf("Somma: %.2lf", somma);

  return 0;
}

void sum(double *s, double x, double y){
  *s = x + y;
}
