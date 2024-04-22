#include "Sensore.h"

class Contundente : public Sensore {
  enum tipo { abrasione, percossa, taglio };
  double indensita;
  double prob;

public:
  Contundente();
  double calc_prob();
};
