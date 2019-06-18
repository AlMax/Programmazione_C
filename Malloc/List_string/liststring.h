#ifndef LISTSTRING_H
#define LISTSTRING_H

struct list{
  char head;
  struct list *tail;
};

struct list *construct_list_from_string(const char *s);
void print_list(struct list *l);
struct list *doppie(struct list *this);

#endif
