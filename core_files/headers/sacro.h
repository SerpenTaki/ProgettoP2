#ifndef SACRO_H
#define SACRO_H

#include "sensoreDanno.h"

class sacro: public sensoreDanno{
private:
    int lvFede;
    static int limitbreak; // quando il parametro raggiunge 10 hai vinto la partita, mostra nuovo grafico del limit break
    enum{fedeBassa, fedeMedia, fedeAlta};
protected:
    double calcolaDanno();
public:
    static const std::string tipo;

    sacro();
    ~sacro();

    int getLvFede() const;
    int getlimitBreak() const;
    
    double getHit() override;
    bool checkLimit();
    int calcolaLimit();
};

#endif