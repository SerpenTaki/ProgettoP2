#include "Sensore.h"

using std::string;

void Sensore::setStatus(bool status){
    status = true;
}

void Sensore::modStatus(bool status){
    if(status == true){
        status = false;
    }
    else{
        status = true;
    }
}

double Sensore::getDanno() const{
    //registrare l'input
}

double Sensore::calcolaDanno() const{

}

string Sensore::getDescrizione() const{

}

bool Sensore::checkStatus(bool status) const{
    return status;
}

