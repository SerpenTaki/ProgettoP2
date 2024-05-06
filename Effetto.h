#ifndef EFFETTO_H
#define EFFETTO_H

#include "Magico.h"
#include "Emotivo.h"

class Effetto: public Magico, public Emotivo{
private:
    double dannoEffetto;
    int durataEffetto;
public:
    Effetto();
    ~Effetto();
    double calcolaDanno();
};

#endif