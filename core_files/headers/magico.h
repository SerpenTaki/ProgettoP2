#ifndef MAGICO_H
#define MAGICO_H

#include "sensoreDanno.h"
#include <string>

class magico : public sensoreDanno {
private:
  int lvMagia;
  std::string status;

public:
  magico();
  ~magico();
  virtual int getLvMagia() const;
  virtual std::string getStatus() const;
  virtual std::string setStatus() const;
};

#endif
