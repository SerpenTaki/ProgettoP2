#ifndef ACQUA_H
#define ACQUA_H
#include "magico.h"
class visitor;

class acqua : public magico {
public:
  void accept(visitor &) override;
  static const std::string tipo;

  acqua();
  ~acqua();

  double getDanno() const;
  int getProbHit() const;
  int getProbCrit() const;
  int getLvMagia() const;

  std::string getStatus() const;
  std::string setStatus() const;
  double calcolaDanno();
};

#endif
