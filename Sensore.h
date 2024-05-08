#ifndef SENSORE_H
#define SENSORE_H

#include <string>

using std::string;

class Sensore {
private:
  //parametri che descrivono il sensore generico
  double danno;
  bool status; //indica se il sensore è attivo
  string descrizione;
protected:
  //Sensore(double d, bool s, string desc, int prob): danno(d), status(s), descrizione(desc) {} //costruttore di default
public:
  //distruttore virtuale
  virtual ~Sensore();
  //Metodi di Set
  virtual void setStatus(bool status);
  virtual void modStatus(bool status);
  //Metodi di Get
  virtual double getDanno() const;
  virtual double calcolaDanno() const;
  virtual string getDescrizione() const;
  //Altri metodi
  virtual bool checkStatus(bool status) const;
};

#endif