#ifndef SACRO_H
#define SACRO_H

#include "sensoreDanno.h"

class sacro: public sensoreDanno{
private:
    int lvFede;
    int limitbreak; // quando il parametro raggiunge 10 hai vinto la partita, mostra nuovo grafico del limit break
public:
    sacro();
    ~sacro();

    int getLvFede() const;
    int getlimitBreak() const;
    double getDanno() const;
    int getProbHit() const;
    int getProbCrit() const;
    
    double calcolaDanno();
    bool checkLimit();
};

#endif