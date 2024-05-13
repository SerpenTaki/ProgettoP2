#include <QApplication>
#include <QBoxLayout>
#include <QGroupBox>
#include <QLabel>
#include <QPushButton>
#include "workspace.h"
/*
class schifo : public QWidget{
    private:
    public: 
    schifo(){
        QVBoxLayout* dobae = new QVBoxLayout(this);
    }
};
*/

int main(int argc, char *argv[]) {
  QApplication App(argc, argv);
  workspace w;
  w.show();
  return App.exec();
}
