#include <stdio.h>
#include <stdlib.h>

int size = 100;
int numeri[100];

int leggi(void);
int somma(int a[size], int);

int main(void){
  printf("La somma e': %i", somma(numeri, leggi()));
}

int leggi(){

  int count = 0, i;

  for( i = 0 ; i < size ; i++ ){

    printf("Inserisci un numero, metti 0 per terminare l'inseirmento: ");
    scanf(" %i", &numeri[i]);
    count++;

    if( numeri[i] == 0 ){
      return count-2;
    }

  }
  return count;

}

int somma(int a[size], int size){
  if( size == 0 ){
    return a[size];
  } else {
    return a[size] + somma(a, size-1);
  }
}
