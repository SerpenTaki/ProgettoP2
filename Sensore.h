#ifndef SENSORE_H
#define SENSORE_H

#include <string>


class Sensore {
private:
  double danno;
public:
  Sensore();
  ~Sensore();
  virtual bool isDead() const;
  virtual double getDanno() const;
  virtual double calcolaDanno();
};

#endif