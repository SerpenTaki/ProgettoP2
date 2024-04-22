#ifndef MAGICO_H
#define MAGICO_H
#include "Sensore.h"

class Magico : virtual public Sensore{
private:
    double dannoMagico;
    int tipoMagico;
public:
    Magico();
    ~Magico();
    virtual int getTipo() const;
    double calcolaDanno();

};

#endif 