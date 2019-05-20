#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct date{
  int day;
  int month;
  int year;
};

struct date insertDate();
bool checkDate(struct date d);
int maxDays(int month, int year);
int elapsedDays(struct date d1, struct date d2);
int n(struct date d);
int f(int year, int month);
int g(int month);
int k(struct date d);

int main(void){
  struct date data1;
  struct date data2;

  data1 = insertDate();
  printf(checkDate(data1) ? "Data Valida.\n" : "Data NON Valida." );
  data2 = insertDate();
  printf(checkDate(data2) ? "Data Valida.\n" : "Data NON Valida." );
  printf("Differenza in giorni tra le due date: %i", elapsedDays(data1,data2));

  return 0;
}

struct date insertDate(){
  struct date d;
  printf("Inserisci la data: giorno/mese/anno: ");
  scanf("%i/%i/%i", &d.day, &d.month, &d.year);
  return d;
}

bool checkDate(struct date d){
    if(d.year <= 9999){
      if(d.month >= 1 && d.month <= 12){
        if(d.day >= 1 &&  d.day <= maxDays(d.month,d.year)){
          if( (d.day >= 1 && d.month >= 3 && d.year >= 1700) || d.year > 1700) {
              return true;
          }
        }
      }
    }
    return false;
}

int maxDays(int month, int year){
  if(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)){
    if(month == 2){
      return 28;
    }
  }
  if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
      return 31;
  else if(month == 2)
    return 29;
  else
    return 30;
}

int elapsedDays(struct date d1, struct date d2){
  if( (n(d2) - n(d1)) < 0 )
    return -(n(d2) - n(d1));
  else
    return n(d2) - n(d1);
}

int n(struct date d){
  return (((1461 * f(d.year,d.month)) / 4) + ((153 * g(d.month)) / 5) + d.day + k(d));
}

int f(int year, int month){
  if( month <= 2 )
    return year-1;
  return year;
}

int g(int month){
  if( month <= 2 )
    return month+13;
  return month+1;
}

int k(struct date d){
  if( d.day >= 1 && d.month >= 3 && d.year >= 1900)
    return 0;
  else if( (d.day >= 1 && d.month >= 3 && d.year >= 1800) && (d.day <= 28 && d.month <= 2 && d.year <= 1900))
    return 1;
  else if( (d.day >= 1 && d.month >= 3 && d.year >= 1700) && (d.day <= 28 && d.month <= 2 && d.year <= 1800))
    return 2;
}
