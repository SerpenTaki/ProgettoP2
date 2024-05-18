#include "headers/window_new_sensor.h"
#include "../core_files/headers/sensor_factory.h"
// #include "headers/visitor_new_sensor.h"
window_new_sensor::window_new_sensor(std::list<sensoreDanno *> *lista_sensori,
                                     QWidget *main, QWidget *parent)
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

  gruppo->addButton(fisico, SensoreFactory::FISICO);
  gruppo->addButton(sacro, SensoreFactory::SACRO);
  gruppo->addButton(erba, SensoreFactory::ERBA);
  gruppo->addButton(fuoco, SensoreFactory::FUOCO);
  gruppo->addButton(acqua, SensoreFactory::ACQUA);

  connect(gruppo, SIGNAL(buttonClicked(QAbstractButton *)), this,
          SLOT(onSelected()));
  setLayout(layout);
}
void window_new_sensor::onSelected() {
  int selected = gruppo->checkedId();
  if (selected) {
    plista->push_back(SensoreFactory::creaSensore(selected));
  }
}

void window_new_sensor::add_sensor(QAbstractButton *bottone) {}
