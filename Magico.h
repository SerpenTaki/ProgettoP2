#ifndef MAGICO_H
#define MAGICO_H
#include "Sensore.h"

class Magico : virtual public Sensore{
private:
    double dannoMagico;

public:
    Magico();
    ~Magico();
    double calcolaDanno();

};

#endif 