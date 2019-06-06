#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main(void){
  srand(time(NULL));
  int i, *pi;
  char c, *pc;
  double d, *pd;

  printf("VARIABILI, SPAZIO VARIABILI, PUNTATORI, SPAZIO PUNTATORI:\n");

  i = (rand() % 100) + 1;
  c = (rand() % 25) + 'A';
  d = ((rand() % 100)/100.00) + (rand() % 100);

  pi = &i;
  pc = &c;
  pd = &d;

  printf("Intero generato: %i, Spazio: %li Byte ; Puntatore: %p, Spazio:%li Byte \nCarattere generato: %c, Spazio: %li Byte ; Puntatore: %p, Spazio:%li Byte \nDouble generato: %.2lf, Spazio: %li Byte ; Puntatore: %p, Spazio:%li Byte \n", i, sizeof(i), pi, sizeof(pi), c, sizeof(c), pc, sizeof(pc), d, sizeof(d), pd, sizeof(pd));

  return 0;
}
