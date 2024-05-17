#include "headers/window_new_sensor.h"
window_new_sensor::window_new_sensor(QWidget *main, QWidget *parent)
    : QWidget(parent) {
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

  gruppo->addButton(fisico);
  gruppo->addButton(sacro);
  gruppo->addButton(erba);
  gruppo->addButton(fuoco);
  gruppo->addButton(acqua);

  connect(gruppo, SIGNAL(buttonClicked(QAbstractButton *)), this,
          SLOT(onSelected()));
  setLayout(layout);
}
void window_new_sensor::onSelected() {
  QAbstractButton *selectedButton = gruppo->checkedButton();
  if (selectedButton) {
    if (selectedButton == fisico)
      (mainwindow->layout)->addWidget(add_sensor(selectedButton));
  }
}

void window_new_sensor::add_sensor(QAbstractButton *bottone) {}
