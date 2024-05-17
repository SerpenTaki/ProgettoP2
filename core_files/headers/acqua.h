#ifndef ACQUA_H
#define ACQUA_H

#include"magico.h"

class acqua : public magico{
public:
    static const std::string tipo;

    acqua();
    ~acqua();

    double getDanno() const;
    int getProbHit() const;
    int getProbCrit() const;
    int getLvMagia() const;

    std::string getStatus() const;
    std::string setStatus() const;
    double calcolaDanno();

    void accept(visitor &visitor);
};

#endif