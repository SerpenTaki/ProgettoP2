#include "../../core_files/headers/sensoreDanno.h"
#include <QLabel>
#include <QWidget>
#ifndef VSENSORE_H
#define VSENSORE_H

class Vsensore : public QWidget {
  // QLabel *tipo;
  QLabel *nome;

public:
  Vsensore(sensoreDanno *);
};
#endif // !VSENSORE_H
