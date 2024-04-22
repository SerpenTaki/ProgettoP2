#ifndef SENSORE_H
#define SENSORE_H

#include <string>


class Sensore {
private:
  double vita;
  bool isAlive;
  double danno;
public:
  Sensore();
  ~Sensore();
  virtual double get_healthbar() const;
  virtual bool isDead() const;
  virtual double getDanno() const;
  virtual double calcolaDanno();
};

#endif