#ifndef MAINW_H
#define MAINW_H
#include "../../core_files/headers/sensoreDanno.h"
#include "barramenu.h"
// #include "window_new_sensor.h"
#include <QAction>
#include <QApplication>
#include <QBoxLayout>
#include <QGroupBox>
#include <QLabel>
#include <QPushButton>
#include <QWidget>

class workspace : public QWidget {
private:
  bmenu *menu;
  std::list<sensoreDanno *> *plista;

public:
  QVBoxLayout *l_sensori;
  QGroupBox *sensori;
  workspace(std::list<sensoreDanno *> *, QWidget * = nullptr);
public slots:
  void new_sensor();
};

#endif
