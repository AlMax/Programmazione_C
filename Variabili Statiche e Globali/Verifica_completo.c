#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int verifica_crescente(int array[]);
int verifica_decrescente(int array[]);
void massimo_crescente(int array[]);

int DIM=100;

int main(void){
  srand(time(NULL));
  int array[DIM];

  for(int i = 0 ; i < DIM ; i++){

    array[i] = rand() % 11;

  } //Riempimento

  printf("Contenuto dell'array");
  for( int i = 0 ; i < DIM ; i++ ){

    if( i % 10 == 0 ){
      printf("\n");
    }

    printf("[%i]:%i ", i, array[i]);
  } //Stampa

  verifica_crescente(array);
  verifica_decrescente(array);
  massimo_crescente(array);

  return 0;
}

int verifica_crescente(int array[]){

  for( int i = 0 ; i < DIM-3 ; i++ ){

    if( array[i] < array[i+1] ){

        if( array[i+1] < array[i+2] ){

          printf("\n\nVerificata sequenza da 3 crescente; Indice: %i, Primo: %i, Secondo: %i, Terzo: %i\n", i, array[i], array[i+1], array[i+2]);
          return 1;

        }

    }

  }
  return 0;
}

int verifica_decrescente(int array[]){

  for( int i = 0 ; i < DIM-3 ; i++ ){

    if( array[i] > array[i+1] ){

        if( array[i+1] > array[i+2] ){

          printf("\nVerificata sequenza da 3 decrescente; Indice: %i, Primo: %i, Secondo: %i, Terzo: %i\n", i, array[i], array[i+1], array[i+2]);
          return 1;

        }

    }

  }
  return 0;
}

void massimo_crescente(int array[]){

  int max = 0;
  int count = 0;
  int index = 0;


  for ( int i = 0 ; i < DIM-1 ; i++ ){
    if( array[i] < array[i+1] ){
      count++;
    } else {
      if( max < count+1 ){
        index = i-count;
        max = count+1;
      }
      count = 0;
    }
  }
  printf("\nIndice inizio crescenti massimi: %i, Crescenti consecutivi: %i ", index, max);
  printf("\nMassimi crescenti:");
  for( int i = 0 ; i < max ; i++ ){

    printf(" %i", array[index+i]);

  }
  printf("\n");

}
