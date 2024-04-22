#include "Sensore.h"

class Contundente : virtual public Sensore {
  enum tipo { abrasione, percossa, taglio };
  double indensita;
  int prob;

public:
  Contundente();
  double calc_prob();
};
