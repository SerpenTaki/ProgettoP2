#include "headers/window_add_sensor.h"
window_add_sensor::window_add_sensor(QWidget *parent) : QWidget(parent) {
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

  gruppo->addButton(fisico);
  gruppo->addButton(sacro);
  gruppo->addButton(erba);
  gruppo->addButton(fuoco);
  gruppo->addButton(acqua);

  connect(gruppo, SIGNAL(buttonClicked(QAbstractButton *)), this,
          SLOT(onSelected()));
  setLayout(layout);
}
void window_add_sensor::onSelected() {}
