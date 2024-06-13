#ifndef FUOCO_H
#define FUOCO_H

#include"magico.h"

class fuoco : public magico{
public:
    static const std::string tipo;

    ~fuoco();

    string setStatus();
    double calcolaDanno();
    double getHit();


    //per implementazione grafica
    void accept(visitor &visitor);
};

#endif