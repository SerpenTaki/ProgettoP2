#ifndef GETTYPE_H
#define GETTYPE_H
// #include "../core_files/headers/acqua.h"
// #include "../core_files/headers/erba.h"
// #include "../core_files/headers/fisico.h"
// #include "../core_files/headers/fuoco.h"
// #include "../core_files/headers/sacro.h"
#include "visitor.h"
#include <string>

class getType : public visitor {
  virtual std::string visit(const erba *) const override;
  virtual std::string visit(const acqua *) const override;
  virtual std::string visit(const fisico *) const override;
  virtual std::string visit(const fuoco *) const override;
  virtual std::string visit(const sacro *) const override;
};
#endif
