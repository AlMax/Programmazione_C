#include <stdio.h>
#include <stdlib.h>

char stringa[80];

int leggi(void);
int palindroma(int, int);

int main(void){

  if( palindroma(0, leggi()) != 0 ){
    printf("Palindroma!");
  } else {
    printf("Non palindroma!");
  }
  return 0;
}

int leggi(){

  int count = 0, i;

  for( i = 0 ; i < 80 ; i++ ){

    printf("Inserisci un char, metti il punto per terminare l'inserimento: ");
    scanf(" %c", &stringa[i]);
    count++;

    if( stringa[i] == '.' ){
      return count-2;
    }

  }
  return count;

}

int palindroma(int prima, int ultima){

  if( (stringa[prima] == stringa[ultima]) && (prima < ultima) ){
    return palindroma( prima+1, ultima-1 );
  } else if( prima == ultima || (prima-1) == ultima ){
    return 1;
  } else {
    return 0;
  }

}
