#ifndef FISICO_H
#define FISICO_H

#include"sensoreDanno.h"

using std::vector;
using std::string;

class sensoreDanno;

class fisico : virtual public sensoreDanno{
private:
    int affilatura; //% da richiedere all'utente altrimenti random
public:
    static const std::string tipo;
    fisico(double d, int ph, int pc, vector<int> tpt, int aff) : sensoreDanno(d, ph, pc, tpt), affilatura(aff) { std::cout << "Oggetto fisico Creato" << std::endl; }
    ~fisico();

    int getAffilatura() const;

    double getHit() override;
    double calcolaDanno();

    //Per implementazione grafica
    void accept(visitor &visitor) override;
};

#endif