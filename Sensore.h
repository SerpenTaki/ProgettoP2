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
  unsigned int percorso_immagine;
  int probHit;
protected:
  Sensore(double danno, bool status, string descrizione, unsigned int percorso_immagine, int probHit); //costruttore di default
public:
  //distruttore virtuale
  virtual ~Sensore();
  //Metodi di Set
  void setStatus(bool status);
  void modStatus(bool status);
  //Metodi di Get
  double getDanno() const;
  double calcolaDanno() const;
  string getDescrizione() const;
  //Altri metodi
  bool checkStatus(bool status) const;
};

#endif