#include "../../core_files/headers/sensoreDanno.h"
#include "barramenu.h"
#include "window_new_sensor.h"
#include <QAction>
#include <QApplication>
#include <QBoxLayout>
#include <QGroupBox>
#include <QLabel>
#include <QPushButton>
#ifndef MAINW_H
#define MAINW_H

class workspace : public QWidget {
private:
  bmenu *menu;

public:
  QVBoxLayout *l_sensori;
  workspace(std::list<sensoreDanno> *, QWidget * = nullptr);
public slots:
  void new_sensor();
};

#endif
