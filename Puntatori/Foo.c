#include <stdio.h>
void foo1(int xval) {
  int x;
  x = xval;
  printf("X\nValore: %i, Indirizzo: %p", x, &x);
  }
  void foo2(int dummy) {
  int y;
  printf("\n\nY\nValore: %i, Indirizzo: %p", y, &y);
  }
  int main(void) {
  foo1(7);
  foo2(11);
  return 0;
}
