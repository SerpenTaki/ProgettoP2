#include "headers/fisico.h"

const std::string fisico::tipo = "Fisico";

int fisico::getAffilatura() const{
    return affilatura;
}

double fisico::calcolaDanno(){
    if(getProbHit() > 90){
        return 0;
    }
    double nDanni = getDanno();
    nDanni = nDanni * fisico::getAffilatura() / 10;
    if (getProbCrit() > 75){
        nDanni = (nDanni * 30)/100;
        return nDanni;
    }
    else
        return nDanni;
}