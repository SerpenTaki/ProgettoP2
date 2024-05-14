#ifndef SENSOREDANNO_H
#define SENSOREDANNO_H

#include<vector>

using std::vector;

class sensoreDanno{
private:
    double danno;
    int probHit; //random
    int probCrit; //random
    vector<double> totDanni;
public:
    sensoreDanno(double d, int ph, int pc, vector<double> td): danno(d), probHit(ph), probCrit(pc), totDanni(td) {}
    virtual ~sensoreDanno();
    
    //Metodi getter
    virtual double getDanno() const;
    virtual int getProbHit() const;
    virtual int getProbCrit() const;
    //altro
    virtual double calcolaDanno();
    
};

#endif
