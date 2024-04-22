#include "Sensore.h"

class Contundente : public Sensore {
  enum tipo { abrasione, percossa, taglio };
  double indensita;
  double prob;

public:
  Contundente();
  ~Contundente();
  double calc_prob();
};
