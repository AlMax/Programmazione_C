#include <stdlib.h>
#include <stdio.h>

struct time{
  int hours;
  int minutes;
  int seconds;
};

void split_time(long int tot_sec, struct time *t);

int main(void){
  struct time tempo;
  struct time *pt = &tempo;
  int long secondi;

  printf("Inserire i secondi: ");
  scanf("%i", &secondi);

  split_time(secondi, pt);

  printf("Orario %.2li:%.2li:%.2li", pt->hours, pt->minutes, pt->seconds);

  return 0;
}

void split_time(long int tot_sec, struct time *t){
  t->hours = tot_sec/3600;
  t->minutes = (tot_sec%3600)/60;
  t->seconds = (tot_sec%3600)%60;
}
