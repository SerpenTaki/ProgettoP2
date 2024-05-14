#include "mainw.h"
#include <QApplication>
#include <QBoxLayout>
#include <QGroupBox>
#include <QLabel>
#include <QPushButton>

int main(int argc, char *argv[]) {
  QApplication App(argc, argv);
  workspace w;
  w.resize(800, 494);
  w.show();
  return App.exec();
}
