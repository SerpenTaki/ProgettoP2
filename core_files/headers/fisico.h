#ifndef FISICO_H
#define FISICO_H

#include"sensoreDanno.h"

class fisico : public sensoreDanno{
private:
    int affilatura; //% da richiedere all'utente altrimenti random
protected:
    double calcolaDanno();
public:
    static const std::string tipo;
    fisico();
    ~fisico();
    int getAffilatura() const;

    double getHit() override;
    double calcolaDanno();
};

#endif