#include "../../core_files/headers/sensoreDanno.h"
#include "qbuttongroup.h"
#include <QApplication>
#include <QButtonGroup>
#include <QLabel>
#include <QLayout>
#include <QPushButton>
#include <QRadioButton>
#include <QWidget>

class window_new_sensor : public QWidget {
private:
  std::list<sensoreDanno *> *plista;
  QLabel *titolo;
  QButtonGroup *gruppo;
  QRadioButton *erba;
  QRadioButton *fuoco;
  QRadioButton *sacro;
  QRadioButton *fisico;
  QRadioButton *acqua;

  QWidget *mainwindow;
  QPushButton *add = new QPushButton("Aggiungi sensore");
  void new_sensor(QAbstractButton *);

public:
  window_new_sensor(std::list<sensoreDanno *> *, QWidget *,
                    QWidget * = nullptr);
  void add_sensor(QAbstractButton *);
public slots:
  void onSelected();
};
