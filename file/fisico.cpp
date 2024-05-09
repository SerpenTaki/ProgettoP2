#include "fisico.h"

double fisico::getDanno() const{
    return sensoreDanno::getDanno();
}

int fisico::getProbHit() const{
    return sensoreDanno::getProbHit();
}

int fisico::getProbCrit() const{
    return sensoreDanno::getProbCrit();
}

int fisico::getAffilatura() const{
    return affilatura;
}

double fisico::calcolaDanno(){
    double nDanni = fisico::getDanno();

    //....
}