#ifndef FISICO_H
#define FISICO_H

#include "sensoreDanno.h"

class fisico : public sensoreDanno {
class fisico : public sensoreDanno{
private:
  int affilatura; //% da richiedere all'utente altrimenti random
public:
    static const std::string tipo;
    fisico(double d, int ph, int pc, vector<int> tpt, int aff);
    ~fisico();

    int getAffilatura() const;

    double getHit() override;
    double calcolaDanno();

    //Per implementazione grafica
};

#endif
