#ifndef ERBA_H
#define ERBA_H

#include <regex>
#include <string>

#include "magico.h"

class erba : public magico {
public:
  static const std::string tipo;
  // per implementazione grafica
  void accept(visitor &) override;

  erba();
  ~erba();

  string setStatus();
  double calcolaDanno();
  double getHit();

  //per grafica
  //void accept(visitor &visitor);
};

#endif
