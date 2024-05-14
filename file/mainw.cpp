#include "mainw.h"
workspace::workspace(QWidget *parent) : QWidget(parent) {
  QHBoxLayout *main = new QHBoxLayout(this);
  QGroupBox *sensori = new QGroupBox;
  QGroupBox *prova = new QGroupBox;
  QVBoxLayout *l_prova = new QVBoxLayout;
  QPushButton *b_addsensore = new QPushButton("Nuovo Sensore");
  l_sensori = new QVBoxLayout;

  sensori->setLayout(l_sensori);
  l_sensori->addWidget(b_addsensore);
  main->addWidget(sensori);
  prova->setLayout(l_prova);
  main->addWidget(prova);

  connect(b_addsensore, &QPushButton::clicked, this, &workspace::new_sensore);
}

void workspace::new_sensore() {
  QWidget *schifo = new window_add_sensor();
  schifo->resize(230, 180);
  schifo->show();
}
