#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int n=10; //Dimensione matrice

void prodotto_matriciale(int a[][n], int b[][n], int c[][n]);

int main(void){
  int A[n][n], B[n][n], C[n][n];
  srand(time(NULL));

  for( int i = 0 ; i < n ; i++ ){

    for( int j = 0 ; j < n ; j++ ){

      A[i][j] = rand() % 51;
      B[i][j] = rand() % 51;
      C[i][j] = 0;

    }

  } //Riempimento

  /*
  printf("Stampa Matrice A:");
  for( int i = 0 ; i < n ; i++ ){
    printf("\n");
    for( int j = 0 ; j < n ; j++ ){
      printf("%i ", A[i][j]);
    }
  } //Stampa A
  printf("\n");

  printf("\nStampa Matrice B:");
  for( int i = 0 ; i < n ; i++ ){
    printf("\n");
    for( int j = 0 ; j < n ; j++ ){
      printf("%i ", B[i][j]);
    }
  } //Stampa B
  printf("\n\n");
  */

  prodotto_matriciale(A, B, C);

  printf("Stampa Matrice dei Prodotti C:");
  for( int i = 0 ; i < n ; i++ ){
    printf("\n");
    for( int j = 0 ; j < n ; j++ ){

      printf("%i ", C[i][j]);

    }


  } //Stampa C
  printf("\n");

  return 0;
}

void prodotto_matriciale(int a[][n], int b[][n], int c[][n]){
  for( int i = 0 ; i < n ; i++ ){

    for( int j = 0 ; j < n ; j++ ){

      for( int r = 0 ; r < n-1 ; r++ ){

        c[i][j] += a[i][r] * b[r][j];

      }

    }

  } //Riempimento
}
