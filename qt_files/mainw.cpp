#include "headers/mainw.h"
#include "../core_files/headers/sensoreDanno.h"
#include <QMenuBar>
workspace::workspace(std::list<sensoreDanno *> *lista_sensori, QWidget *parent)
    : QWidget(parent) {
  plista = lista_sensori;
  QHBoxLayout *main = new QHBoxLayout(this);
  QGroupBox *sensori = new QGroupBox;
  QGroupBox *prova = new QGroupBox;
  QVBoxLayout *l_prova = new QVBoxLayout;
  QPushButton *b_addsensore = new QPushButton("Nuovo Sensore");
  menu = new bmenu;
  main->setMenuBar(menu);
  l_sensori = new QVBoxLayout;

  sensori->setLayout(l_sensori);
  l_sensori->addWidget(b_addsensore);

  main->addWidget(sensori);
  prova->setLayout(l_prova);
  main->addWidget(prova);

  connect(b_addsensore, &QPushButton::clicked, this, &workspace::new_sensor);
}

void workspace::new_sensor() {
  QWidget *schifo = new window_new_sensor(plista, this);
  schifo->resize(230, 180);
  schifo->show();
}
