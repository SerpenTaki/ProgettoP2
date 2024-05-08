#ifndef CONTUNDENTE_H
#define CONTUNDENTE_H

#include "Sensore.h"

class Contundente : public Sensore {
  int tipo;
  double intensita;
  int probHit;
public:
  Contundente(int t, double i, int prob): tipo(t), intensita(i), probHit(prob) {}
  ~Contundente();


  virtual int calc_prob() const;
  double calcolaDanno() const;

};

#endif