#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void verifica(int array[]); //Stampa i numeri che sono maggiori o uguali alla somma dei numeri successivi nell'array

int DIM=100;

int main(void){
  srand(time(NULL));
  int array[DIM];

  for(int i = 0 ; i < DIM ; i++){

    array[i] = rand() % 101;

  } //Riempimento

  printf("Contenuto dell'array");
  for( int i = 0 ; i < DIM ; i++ ){

    if( i % 10 == 0 ){
      printf("\n");
    }

    printf("[%i]:%i ", i, array[i]);
  } //Stampa

  printf("\n\nNumeri Verificati\n");
  verifica(array);

  return 0;
}

void verifica(int array[]){
  int somma;

  for( int i = 0 ; i < DIM-1 ; i++ ){

    somma=0;
    for( int j = i + 1 ; j < DIM ; j++ ){
      somma += array[j];
    }

    if(array[i] > somma){
      printf("[%i]:%i \n", i, array[i]);
    }

  }
}
