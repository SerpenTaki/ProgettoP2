#ifndef ERBA_H
#define ERBA_H
#include <regex>
#include <string>

#include "magico.h"

class erba : public magico {
private:

public:
  static const std::string tipo;

  erba();
  ~erba();

  double getDanno() const;
  int getProbHit() const;
  int getProbCrit() const;
  int getLvMagia() const;

  std::string getStatus() const;
  std::string setStatus() const;

  double calcolaDanno();
};

#endif
