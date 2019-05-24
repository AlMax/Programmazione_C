#idndef PUNTO_H
#define PUNTO_H
#include <stdbool.h>

struct punto {
  double ascissa; //x
  double ordinata; //y
}

struct punto inserisci_punto(void);

bool equals_punti(struct punto, struct punto);

#endif
