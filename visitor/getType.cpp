#include "getType.h"
#include <string>

std::string getType::visit(const erba *er) const { return erba::tipo; }
std::string getType::visit(const acqua *aq) const { return acqua::tipo; }
std::string getType::visit(const fisico *fi) const { return fisico::tipo; }
std::string getType::visit(const fuoco *fu) const { return fuoco::tipo; }
std::string getType::visit(const sacro *sa) const { return sacro::tipo; }
