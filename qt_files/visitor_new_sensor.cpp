
#include "headers/visitor_new_sensor.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QWidget>

QWidget *visitor_new_sensor::visit(erba *er) {
  QWidget *sensore = new QWidget;
  QVBoxLayout *layout = new QVBoxLayout;
  QLabel *tipo = new QLabel(QString::fromStdString(erba::tipo));
  QLabel *nome = new QLabel(QString::fromStdString(er->nome));
  layout->addWidget(tipo);
  layout->addWidget(nome);
  return sensore;
}

QWidget *visitor_new_sensor::visit(acqua *aq) {
  QWidget *sensore = new QWidget;
  QVBoxLayout *layout = new QVBoxLayout;
  QLabel *tipo = new QLabel(QString::fromStdString(acqua::tipo));
  QLabel *nome = new QLabel(QString::fromStdString(aq->nome));
  layout->addWidget(tipo);
  layout->addWidget(nome);
  return sensore;
}
QWidget *visitor_new_sensor::visit(fisico *fi) {
  QWidget *sensore = new QWidget;
  QVBoxLayout *layout = new QVBoxLayout;
  QLabel *tipo = new QLabel(QString::fromStdString(fisico::tipo));
  QLabel *nome = new QLabel(QString::fromStdString(fi->nome));
  layout->addWidget(tipo);
  layout->addWidget(nome);
  return sensore;
}
QWidget *visitor_new_sensor::visit(fuoco *fu) {
  QWidget *sensore = new QWidget;
  QVBoxLayout *layout = new QVBoxLayout;
  QLabel *tipo = new QLabel(QString::fromStdString(fuoco::tipo));
  QLabel *nome = new QLabel(QString::fromStdString(fu->nome));
  layout->addWidget(tipo);
  layout->addWidget(nome);
  return sensore;
}
QWidget *visitor_new_sensor::visit(sacro *sa) {
  QWidget *sensore = new QWidget;
  QVBoxLayout *layout = new QVBoxLayout;
  QLabel *tipo = new QLabel(QString::fromStdString(sacro::tipo));
  QLabel *nome = new QLabel(QString::fromStdString(sa->nome));
  layout->addWidget(tipo);
  layout->addWidget(nome);
  return sensore;
}
