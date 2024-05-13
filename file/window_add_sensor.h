#include <QApplication>
#include <QDialog>
#include <QLabel>
#include <QMainWindow>
#include <QWidget>

class window_add_sensor : public QWidget {
private:
  QLabel *titolo;

public:
  window_add_sensor(QWidget *parent = nullptr) : QWidget(parent) {
    titolo = new QLabel(this);
    titolo->setText("Specificare il tipo di sensore:");
  }
};
