#ifndef EMOTIVO_H
#define EMOTIVO_H
#include "Sensore.h"

class Emotivo : virtual public Sensore {
private:
  double dannoEmo;
  double durata;
  int probHit;
public:
  Emotivo();
  ~Emotivo();
  // virtual int getTipo() const;
  virtual int calcolaDurata() const;
  int calcolaProbabilita() const;
  double calcolaDanno() const;
};

#endif
