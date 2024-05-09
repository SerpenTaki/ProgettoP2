#ifndef FISICO_H
#define FISICO_H

#include"sensoreDanno.h"

class fisico : public sensoreDanno{
private:
    int affilatura; //% da richiedere all'utente altrimenti random
public:
    fisico();
    ~fisico();
    double getDanno() const;
    int getProbHit() const;
    int getProbCrit() const;
    int getAffilatura() const;

    double calcolaDanno();
};

#endif