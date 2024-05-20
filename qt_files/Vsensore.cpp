#include "headers/Vsensore.h"
#include "../visitor/getType.h"
#include <QLabel>
#include <QString>

Vsensore::Vsensore(sensoreDanno *sensore) {
  nome = new QLabel(QString::fromStdString(sensore->nome));
  getType oggetto;
  tipo = new QLabel(QString::fromStdString(oggetto.visit(sensore)));
}
