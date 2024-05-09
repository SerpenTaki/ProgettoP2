#ifndef FISICO_H
#define FISICO_H
#include "Contundente.h"
#include "Magico.h"

class Fisico : public Contundente, public Magico {
private:
  int tipoFisico;
  int prob;
public:
  Fisico();
  ~Fisico();


  int calc_prob() const;
  double calcolaDanno() const;
};
#endif
