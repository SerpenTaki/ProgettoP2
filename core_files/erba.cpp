#include "headers/erba.h"

const std::string erba::tipo = "Erba";
void erba::accept(visitor &sensore) { sensore.visit(this); }
