#ifndef VISITOR_H
#define VISITOR_H

#include <QWidget>

class acqua;
class erba;
class fisico;
class fuoco;
class sacro;

class visitor {
public:
  virtual std::string visit(const erba *) const = 0;
  virtual std::string visit(const acqua *) const = 0;
  virtual std::string visit(const fisico *) const = 0;
  virtual std::string visit(const fuoco *) const = 0;
  virtual std::string visit(const sacro *) const = 0;
};
#endif
