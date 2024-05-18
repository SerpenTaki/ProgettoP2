#include "../core_files/headers/acqua.h"
#include "../core_files/headers/erba.h"
#include "../core_files/headers/fisico.h"
#include "../core_files/headers/fuoco.h"
#include "../core_files/headers/sacro.h"
#include <QWidget>
class visitor : public ::acqua,
                public ::erba,
                public ::fisico,
                public ::fuoco,
                public ::sacro {
public:
  virtual std::string visit(const erba *) const = 0;
  virtual std::string visit(const acqua *) const = 0;
  virtual std::string visit(const fisico *) const = 0;
  virtual std::string visit(const fuoco *) const = 0;
  virtual std::string visit(const sacro *) const = 0;
};
