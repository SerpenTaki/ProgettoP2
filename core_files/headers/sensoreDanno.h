#ifndef SENSOREDANNO_H
#define SENSOREDANNO_H

#include <string>
#include <vector>

using std::vector;

class sensoreDanno {
private:
  double danno;
  int probHit;  // random
  int probCrit; // random
protected:
  vector<int> attacchiPerTurno;

public:
  std::string nome;
  sensoreDanno(double d, int ph, int pc, vector<int> tpt)
      : danno(d), probHit(ph), probCrit(pc), attacchiPerTurno(tpt) {}
  virtual ~sensoreDanno();

  virtual vector<double> getValoriGrafico() final; // metodo per il grafico
  // Metodi getter
  double getDanno() const;
  int getProbHit() const;
  int getProbCrit() const;
  // altro
  virtual double calcolaDanno();
  virtual double getHit();
};

#endif
