#ifndef SENSOREDANNO_H
#define SENSOREDANNO_H

#include<iostream>
#include<vector>
#include<string>
#include<random>

//#include"../../qt_files/headers/visitor.h"

using std::vector;
using std::string;

class sensoreDanno{
private:
    double danno;
    int probHit; //random
    int probCrit; //random
    int randN;
protected:
    vector<int> attacchiPerTurno;
public:
    sensoreDanno(double d, int ph, int pc, vector<int> tpt): danno(d), probHit(ph), probCrit(pc), attacchiPerTurno(tpt) { std::cout << "Oggetto Creato" << std::endl; }
    virtual ~sensoreDanno();

    virtual vector<double> getValoriGrafico() final; //metodo per il grafico
    //Metodi getter
    double getDanno() const;
    int getProbHit() const;
    int getProbCrit() const;
    int getRand();
    //altro
    virtual double calcolaDanno();
    virtual double getHit();  
    //per implementazione grafica
    //virtual void accept(visitor &visitor) = 0;
};

#endif