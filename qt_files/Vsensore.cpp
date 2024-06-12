#include "headers/Vsensore.h"
#include "../visitor/getType.h"
#include <QLabel>
#include <QString>
#include <QVBoxLayout>

Vsensore::Vsensore(sensoreDanno *sensore) {
  nome = new QLabel(QString::fromStdString(sensore->nome));
  getType oggetto;
  QVBoxLayout *layout = new QVBoxLayout;
  layout->addWidget(nome);
  setLayout(layout);
  // tipo = new QLabel(QString::fromStdString(oggetto.visit(sensore)));
};
