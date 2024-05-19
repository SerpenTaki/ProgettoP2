#include"headers/magico.h"

int magico::getLvMagia() const{
    return lvMagia;
}

string magico::getStatus() const{
    return status;
}

bool magico::checkCondition() const{
    return isInStatus;
}

