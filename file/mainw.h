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
  workspace(QWidget * = nullptr);
public slots:
  void new_sensore();
};

#endif
