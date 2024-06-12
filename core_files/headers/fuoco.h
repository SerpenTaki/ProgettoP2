#ifndef FUOCO_H
#define FUOCO_H

#include "magico.h"

class fuoco : public magico {
public:
  static const std::string tipo;
  void accept(visitor &) override;

  fuoco();
  ~fuoco();

  double getDanno() const;
  int getProbHit() const;
  int getProbCrit() const;
  int getLvMagia() const;

  std::string getStatus() const;
  std::string setStatus() const;
  double calcolaDanno();
};

#endif
