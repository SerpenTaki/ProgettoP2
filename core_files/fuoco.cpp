#include "headers/fuoco.h"

const std::string fuoco::tipo = "Fuoco";
void fuoco::accept(visitor &sensore) { sensore.visit(this); }
