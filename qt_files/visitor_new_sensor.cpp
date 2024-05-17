
#include "headers/visitor_new_sensor.h"
#include <QLabel>
#include <QWidget>

void visitor_new_sensor::visit(erba *er) {
  QWidget *sensor = new QWidget;
  QLabel *tipo = new QLabel(QString::fromStdString(erba::tipo));
}

void visitor_new_sensor::visit(acqua *aq) {
  QWidget *sensor = new QWidget;
  QLabel *tipo = new QLabel(QString::fromStdString(acqua::tipo));
}
void visitor_new_sensor::visit(fisico *fi) {
  QWidget *sensor = new QWidget;
  QLabel *tipo = new QLabel(QString::fromStdString(fisico::tipo));
}
void visitor_new_sensor::visit(fuoco *fu) {
  QWidget *sensor = new QWidget;
  QLabel *tipo = new QLabel(QString::fromStdString(fuoco::tipo));
}
void visitor_new_sensor::visit(sacro *sa) {
  QWidget *sensor = new QWidget;
  QLabel *tipo = new QLabel(QString::fromStdString(sacro::tipo));
}
