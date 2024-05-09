#ifndef ERBA_H
#define ERBA_H

#include"magico.h"

class erba : public magico{
public:
    erba();
    ~erba();

    double getDanno() const;
    int getProbHit() const;
    int getProbCrit() const;
    int getLvMagia() const;

    std::string getStatus() const;
    std::string setStatus() const;
    double calcolaDanno();

};

#endif