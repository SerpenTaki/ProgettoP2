#ifndef WINDOW_NEW_SENSOR_H
#define WINDOW_NEW_SENSOR_H
#include "../../core_files/headers/sensoreDanno.h"
#include "qbuttongroup.h"
// #include <QApplication>
#include <QButtonGroup>
#include <QLabel>
#include <QLayout>
#include <QPushButton>
#include <QRadioButton>
#include <QWidget>

class workspace;

class window_new_sensor : public QWidget {
  Q_OBJECT
private:
  std::list<sensoreDanno *> *plista;
  QLabel *titolo;
  QButtonGroup *gruppo;
  QRadioButton *erba;
  QRadioButton *fuoco;
  QRadioButton *sacro;
  QRadioButton *fisico;
  QRadioButton *acqua;

  workspace *mainwindow;
  QPushButton *add;
  void new_sensor(QAbstractButton *);

public:
  window_new_sensor(std::list<sensoreDanno *> *, workspace *,
                    QWidget * = nullptr);
  // void add_sensor(QAbstractButton *);
public slots:
  void onSelected();
};
#endif // !WINDOW_NEW_SENSOR_H
