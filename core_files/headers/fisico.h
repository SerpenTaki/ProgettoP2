#ifndef FISICO_H
#define FISICO_H

#include "sensoreDanno.h"

class fisico : public sensoreDanno {
private:
  int affilatura; //% da richiedere all'utente altrimenti random
public:
  static const std::string tipo;
  void accept(visitor &) override;
  fisico();
  ~fisico();
  int getAffilatura() const;

  double getHit() override;
  double calcolaDanno();
};

#endif
