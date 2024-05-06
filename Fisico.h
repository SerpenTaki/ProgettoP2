#ifndef FISICO_H
#define FISICO_H
#include "Contundente.h"
#include "Magico.h"

class Fisico : public Contundente, public Magico {
private:
  int tipoFisico;
  int debolezza;
public:
  Fisico();
  ~Fisico();
  double calcolaDanno();
};
#endif
