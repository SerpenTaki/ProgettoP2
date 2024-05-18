#include "headers/Vsensore.h"
#include <QLabel>
#include <QString>

Vsensore::Vsensore(sensoreDanno *sensore) {
  nome = new QLabel(QString::fromStdString(sensore->nome));
  tipo = new QLabel(QString::fromStdString(sensore->tipo));
}
