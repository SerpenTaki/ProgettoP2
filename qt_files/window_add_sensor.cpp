#include "headers/window_add_sensor.h"
window_add_sensor::window_add_sensor(QWidget *parent) : QWidget(parent) {
  titolo = new QLabel(this);
  titolo->setText("Specificare il tipo di sensore:");

  magico = new QRadioButton("Magico", this);
  fisico = new QRadioButton("Fisico", this);
  sacro = new QRadioButton("Sacro", this);

  gruppo = new QButtonGroup;
  QVBoxLayout *layout = new QVBoxLayout;

  layout->addWidget(magico);
  layout->addWidget(fisico);
  layout->addWidget(sacro);

  layout->addWidget(add);

  gruppo->addButton(magico);
  gruppo->addButton(fisico);
  gruppo->addButton(sacro);

  connect(gruppo, SIGNAL(buttonClicked(QAbstractButton *)), this,
          SLOT(onSelected()));
  setLayout(layout);
}
void window_add_sensor::onSelected() {}
