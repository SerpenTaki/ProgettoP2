#ifndef ACQUA_H
#define ACQUA_H

#include"magico.h"

class acqua : public magico{
public:
    static const std::string tipo;

    acqua();
    ~acqua();

    std::string setStatus();
    double calcolaDanno();
    double getHit();

    void accept(visitor &visitor);
};

#endif