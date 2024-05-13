#include "window_add_sensor.h"
#include <QApplication>
#include <QBoxLayout>
#include <QGroupBox>
#include <QLabel>
#include <QPushButton>
#ifndef MAINW_H
#define MAINW_H

class workspace : public QWidget {
private:
  QVBoxLayout *l_sensori;

public:
  workspace(QWidget *parent = nullptr) : QWidget(parent) {
    QHBoxLayout *main = new QHBoxLayout(this);
    QGroupBox *sensori = new QGroupBox;
    QGroupBox *prova = new QGroupBox;
    QVBoxLayout *l_prova = new QVBoxLayout;
    QPushButton *b_addsensore = new QPushButton("Add Sensor");
    l_sensori = new QVBoxLayout;

    sensori->setLayout(l_sensori);
    l_sensori->addWidget(b_addsensore);
    main->addWidget(sensori);
    prova->setLayout(l_prova);
    main->addWidget(prova);

    connect(b_addsensore, &QPushButton::clicked, this, &workspace::new_sensore);
  }
public slots:
  void new_sensore() {
    QWidget *schifo = new window_add_sensor;
    schifo->show();
  }
};

#endif
