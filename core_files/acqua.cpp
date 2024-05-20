#include "headers/acqua.h"
// #include "../visitor/getType.h"

const std::string acqua::tipo = "Acqua";
void acqua::accept(visitor &sensore) { sensore.visit(this); }
