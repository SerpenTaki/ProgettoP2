#include "headers/fuoco.h"

const std::string fuoco::tipo = "Fuoco";

void fuoco::accept(visitor &visitor){

}

double fuoco::getHit(){
    if(getProbHit() > 45){
        return this->calcolaDanno();
    }
    return 0.0;
}

double fuoco::calcolaDanno(){
    double nDanni = getDanno();
    nDanni = nDanni + ((getLvMagia() / 2) * 2);
    if(isInStatus == true){
        nDanni = nDanni + nDanni * 0.3;
        return nDanni;
    }
    setStatus();
    return nDanni;
}

string fuoco::setStatus(){
    if (getRand() > 70){
        isInStatus == true;
        return "Bruciato";
    }
    else
        return "nope";
}