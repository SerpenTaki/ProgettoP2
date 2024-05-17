#include "headers/fisico.h"

const std::string fisico::tipo = "Fisico";

int fisico::getAffilatura() const{
    return affilatura;
}

double fisico::getHit(){ /*si collega all'interfaccia grafica*/
    if( getProbHit() > 30 ){
        return this->calcolaDanno();
    }
    return 0.0;
}

double fisico::calcolaDanno(){ // assestante
    double nDanni = getDanno();
    nDanni = nDanni * affilatura / 10;
    if (getProbCrit() > 75){
        nDanni = (nDanni * 30)/100;
        return nDanni;
    }
    else
        return nDanni;
}

void fisico::accept(visitor &visitor){
    
}