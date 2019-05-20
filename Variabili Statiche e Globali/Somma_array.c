#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int valore_minimo(int a[], int b[], int indiciA[], int indiciB[], int DIM);

int main(void){
  srand(time(NULL));
  int DIM;
  printf("Inserire la grandezza dei 2 array: ");
  scanf("%i", &DIM);
  int A[DIM], B[DIM], C[DIM*2];
  int indexA[DIM], indexB[DIM];

  for(int i = 0 ; i < DIM ; i++){

    A[i] = (rand() % DIM) + 1;
    B[i] = (rand() % DIM) + 1;

  } //Riempimento

  for( int i = 0 ; i < DIM*2 ; i++ ){

    C[i] = valore_minimo(A, B, indexA, indexB, DIM);

  }

  printf("\nContenuto dell'array A");
  for( int i = 0 ; i < DIM ; i++ ){

    if( i % 10 == 0 ){
      printf("\n");
    }

    printf("[%i]:%i ", i, A[i]);
  } //Stampa A

  printf("\n\nContenuto dell'array B");
  for( int i = 0 ; i < DIM ; i++ ){

    if( i % 10 == 0 ){
      printf("\n");
    }

    printf("[%i]:%i ", i, B[i]);
  } //Stampa B

  printf("\n\nContenuto dell'array C");
  for( int i = 0 ; i < DIM*2 ; i++ ){

    if( i % 10 == 0 ){
      printf("\n");
    }

    printf("[%i]:%i ", i, C[i]);
  } //Stampa C

  printf("\n");

  return 0;
}

int valore_minimo(int a[], int b[], int indiciA[], int indiciB[], int DIM){
  int minimoA=DIM^DIM, indiceA, minimoB=DIM^DIM, indiceB;
  int static kA = 0, kB = 0;
  int bool=1;

  for( int i = 0 ; i < DIM-1 ; i++ ){

    for( int zA = 0 ; zA < kA ; zA++ ){
      if( i != indiciA[zA] ){
        bool = 1;
      } else {
        bool = 0;
        break;
      }
    }
    for( int zB = 0 ; zB < kB ; zB++ ){
      if( i != indiciB[zB] && bool == 1){
        bool = 1;
      } else {
        bool = 0;
        break;
      }
    }
    for( int zA = 0 ; zA < kA ; zA++ ){
      if( i+1 != indiciA[zA] ){
        bool = 1;
      } else {
        bool = 0;
        break;
      }
    }
    for( int zB = 0 ; zB < kB ; zB++ ){
      if( i+1 != indiciB[zB] && bool == 1){
        bool = 1;
      } else {
        bool = 0;
        break;
      }
    }


    if( bool == 1 ){

      if( minimoA > a[i+1] ){
        minimoA = a[i+1];
        indiceA = i+1;
      } else {
        indiceA = i;
      }
      if( minimoB > b[i+1] ){
        minimoB = b[i+1];
        indiceB = i+1;
      } else {
        indiceB = i;
      }

    }

  }

  if( minimoA < minimoB ){
    indiciA[kA] = indiceA;
    kA++;
    //printf("\n\nMINIMO A: %i, %i, %i\n\n", minimoA, i, j);
    return minimoA;
  } else {
    indiciB[kB] = indiceB;
    kB++;
    //printf("\n\nMINIMO B: %i, %i , %i\n\n", minimoB, i, j);
    return minimoB;
  }

}
