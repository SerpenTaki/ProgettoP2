#ifndef MAGICO_H
#define MAGICO_H

#include "sensoreDanno.h"
#include <string>

using std::string;

class magico : public sensoreDanno {
private:
  int lvMagia; // dall' 1 al 5
  string status;
  bool isInStatus;

public:
  magico(double d, int ph, int pc, vector<int> tpt, int lvM, string stat,
         bool isInSta)
      : sensoreDanno(d, ph, pc, tpt), lvMagia(lvM), status(stat),
        isInStatus(isInSta) {
    std::cout << "Oggetto erba creato" << std::endl;
  }
  ~magico();

  int getLvMagia() const;
  string getStatus() const;
  bool checkCondition() const;

  virtual string setStatus();
};

#endif
