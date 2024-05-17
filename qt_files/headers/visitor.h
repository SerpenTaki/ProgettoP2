#include "../../core_files/headers/acqua.h"
#include "../../core_files/headers/erba.h"
#include "../../core_files/headers/fisico.h"
#include "../../core_files/headers/fuoco.h"
#include "../../core_files/headers/sacro.h"
#include <QWidget>
// #include "../../core_files/headers/sensoreDanno.h"

class visitor : public ::acqua,
                public ::erba,
                public ::fisico,
                public ::fuoco,
                public ::sacro {
public:
  virtual QWidget *visit(erba *) = 0;
  virtual QWidget *visit(acqua *) = 0;
  virtual QWidget *visit(fisico *) = 0;
  virtual QWidget *visit(fuoco *) = 0;
  virtual QWidget *visit(sacro *) = 0;
};
