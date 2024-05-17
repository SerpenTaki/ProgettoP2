#include "../../core_files/headers/acqua.h"
#include "../../core_files/headers/erba.h"
#include "../../core_files/headers/fisico.h"
#include "../../core_files/headers/fuoco.h"
#include "../../core_files/headers/sacro.h"
// #include "../../core_files/headers/sensoreDanno.h"

class visitor : public ::acqua,
                public ::erba,
                public ::fisico,
                public ::fuoco,
                public ::sacro {
public:
  virtual void visit(erba *er) = 0;
  virtual void visit(acqua *aq) = 0;
  virtual void visit(fisico *fi) = 0;
  virtual void visit(fuoco *fu) = 0;
  virtual void visit(sacro *sa) = 0;
};
