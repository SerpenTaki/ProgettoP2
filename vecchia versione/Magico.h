#ifndef MAGICO_H
#define MAGICO_H
#include "Sensore.h"

class Magico : virtual public Sensore{
private:
    double dannoMagico;
    int tipoMagico;
    int durataMagia;
public:
    Magico();
    ~Magico();
    int getTipo() const;
    int calcolaDurata() const;
    double calcolaDanno() const;
};

#endif 