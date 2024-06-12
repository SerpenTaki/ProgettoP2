// #include "headers/window_new_sensor.h"
#include "../core_files/headers/sensor_factory.h"
#include "headers/Vsensore.h"
#include "headers/mainw.h"
#include <iostream>
// #include "headers/visitor_new_sensor.h"
window_new_sensor::window_new_sensor(std::list<sensoreDanno *> *lista_sensori,
                                     workspace *main, QWidget *parent)
    : QWidget(parent) {

  plista = lista_sensori;
  mainwindow = main;
  titolo = new QLabel(this);
  titolo->setText("Specificare il tipo di sensore:");

  fisico = new QRadioButton("Fisico", this);
  sacro = new QRadioButton("Sacro", this);
  erba = new QRadioButton("Erba", this);
  fuoco = new QRadioButton("Fuoco", this);
  acqua = new QRadioButton("Acqua", this);

  gruppo = new QButtonGroup;
  QVBoxLayout *layout = new QVBoxLayout;

  layout->addWidget(fisico);
  layout->addWidget(sacro);
  layout->addWidget(erba);
  layout->addWidget(fuoco);
  layout->addWidget(acqua);

  layout->addWidget(add);

  // in compilazione le righe commentate (credo) danno errore
  // non so perché
  gruppo->addButton(fisico, SensoreFactory::FISICO);
  gruppo->addButton(sacro, SensoreFactory::SACRO); // errore
  gruppo->addButton(erba, SensoreFactory::ERBA);
  gruppo->addButton(fuoco, SensoreFactory::FUOCO); // errore
  gruppo->addButton(acqua, SensoreFactory::ACQUA); // errore

  connect(gruppo, SIGNAL(buttonClicked(QAbstractButton *)), this,
          SLOT(onSelected()));
  connect(add, &QPushButton::clicked, this, &window_new_sensor::addVsensor);
  setLayout(layout);
}

void window_new_sensor::onSelected() {
  int selected = gruppo->checkedId();
  if (selected) {
    plista->push_back(SensoreFactory::creaSensore(selected));
    std::cout << "porcodio";
  }
}

void window_new_sensor::addVsensor() {
  Vsensore *cristo = new Vsensore(plista->back());
  mainwindow->l_sensori->addWidget(cristo);
}
