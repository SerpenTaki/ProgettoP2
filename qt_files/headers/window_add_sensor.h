#include "qbuttongroup.h"
#include <QApplication>
#include <QButtonGroup>
#include <QLabel>
#include <QLayout>
#include <QPushButton>
#include <QRadioButton>
#include <QWidget>

class window_add_sensor : public QWidget {
private:
  QLabel *titolo;
  QButtonGroup *gruppo;
  QRadioButton *erba;
  QRadioButton *fuoco;
  QRadioButton *sacro;
  QRadioButton *fisico;
  QRadioButton *acqua;
  QPushButton *add = new QPushButton("Aggiungi sensore");

public:
  window_add_sensor(QWidget * = nullptr);
public slots:
  void onSelected();
};
