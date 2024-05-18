#include "../../core_files/headers/sensoreDanno.h"
#include <QLabel>
#include <QWidget>

class Vsensore : public QWidget {
  QLabel *tipo;
  QLabel *nome;

public:
  Vsensore(sensoreDanno *);
};
