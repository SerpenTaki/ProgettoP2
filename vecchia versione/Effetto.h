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
    
    int calcolaDurata() const;
    double calcolaDanno() const;
};

#endif