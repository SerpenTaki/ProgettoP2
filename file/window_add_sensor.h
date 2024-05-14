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
  QRadioButton *magico;
  QRadioButton *fisico;
  QRadioButton *sacro;
  QPushButton *add = new QPushButton("Aggiungi sensore");

public:
  window_add_sensor(QWidget *parent = nullptr) : QWidget(parent) {
    titolo = new QLabel(this);
    titolo->setText("Specificare il tipo di sensore:");

    magico = new QRadioButton("Magico", this);
    fisico = new QRadioButton("Fisico", this);
    sacro = new QRadioButton("Sacro", this);

    gruppo = new QButtonGroup;
    QVBoxLayout *layout = new QVBoxLayout;

    layout->addWidget(magico);
    layout->addWidget(fisico);
    layout->addWidget(sacro);

    layout->addWidget(add);

    gruppo->addButton(magico);
    gruppo->addButton(fisico);
    gruppo->addButton(sacro);

    connect(gruppo, SIGNAL(buttonClicked(QAbstractButton *)), this,
            SLOT(onSelected()));
    setLayout(layout);
  }
public slots:
  void onSelected() {}
};
