#include "visitor.h"
#include <string>

class getType : public visitor {
  virtual std::string visit(const erba *) const override;
  virtual std::string visit(const acqua *) const override;
  virtual std::string visit(const fisico *) const override;
  virtual std::string visit(const fuoco *) const override;
  virtual std::string visit(const sacro *) const override;
};
