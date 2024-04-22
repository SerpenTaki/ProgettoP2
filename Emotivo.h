#ifndef EMOTIVO_H
#define EMOTIVO_H
#include "Sensore.h"

class Emotivo : virtual public Sensore {
private:
  double dannoEmo;
  double durata;

public:
  Emotivo();
  ~Emotivo();
  // virtual int getTipo() const;
  double calcolaDanno();
};

#endif
