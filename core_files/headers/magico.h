#ifndef MAGICO_H
#define MAGICO_H

#include "sensoreDanno.h"
#include<string>

using std::string;

class magico :public sensoreDanno{
private:
    int lvMagia; //dall' 1 al 5
    string status;
    bool isInStatus;
public:
    magico();
    ~magico();
    
    int getLvMagia() const;
    string getStatus() const;
    bool checkCondition() const;

    virtual string setStatus();

};

#endif