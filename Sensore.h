#include <string>
class Sensore {
  const double max_vita = 10000;
  const double min_vita = 0;
  double vita;

public:
  Sensore();
  ~Sensore();
  double get_healthbar();
};
