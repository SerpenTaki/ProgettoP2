#ifndef PERSONAGGIO_H
#define PERSONAGGIO_H


#include<list>
#include"Sensore.h"

using std::list;

class Personaggio{
private:
    static double healthbar;
    list<Sensore> listaSensori;
public:
    Personaggio();
    ~Personaggio();
    double getHelth();
    double getTotaleDanni(); //prende i vari calcola danno e gli ritorna
};

#endif