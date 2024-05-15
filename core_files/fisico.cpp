#include "headers/fisico.h"

const std::string fisico::tipo = "Fisico";

double fisico::getDanno() const{
    return getDanno();
}

int fisico::getProbHit() const{
    return getProbHit();
}

int fisico::getProbCrit() const{
    return getProbCrit();
}

int fisico::getAffilatura() const{
    return affilatura;
}

double fisico::calcolaDanno(){
    double nDanni = fisico::getDanno();
    nDanni = nDanni * fisico::getAffilatura() / 10;
    return nDanni;
}