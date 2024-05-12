// #include "QtCore/qtmetamacros.h"
// #include "qboxlayout.h"
// #include "qgroupbox.h"
// #include "qlabel.h"
// #include "qpushbutton.h"
// #include "qwidget.h"
#include <QApplication>
#include <QBoxLayout>
#include <QGroupBox>
#include <QLabel>
#include <QPushButton>

/*
class megamerda:public QWidget{
private:
    QLabel* magia;
    QLabel* fisico;

public:
    megamerda(QWidget*  parent=nullptr): QWidget(parent){
        QVBoxLayout* main = new QVBoxLayout(this);
        QVBoxLayout* l_sensore = new QVBoxLayout;
        QGroupBox* sensore = new QGroupBox;
        QVBoxLayout* l_sensore2 = new QVBoxLayout;
        QGroupBox* sensore2 = new QGroupBox;
        magia = new QLabel("Magia");
        fisico = new QLabel("Fisico");
        QPushButton* edit = new QPushButton("Edit");
        QPushButton* edit2 = new QPushButton("Edit");
        l_sensore->addWidget(magia);
        l_sensore->addWidget(edit);
        l_sensore2->addWidget(fisico);
        l_sensore2->addWidget(edit2);
        sensore->setLayout(l_sensore);
        sensore2->setLayout(l_sensore2);
        main->addWidget(sensore);
        main->addWidget(sensore2);
        connect(edit, &QPushButton::clicked, this, &megamerda::edit_magia);
        connect(edit2, &QPushButton::clicked, this, &megamerda::edit_fisico);
    }
    public slots:
        void edit_magia(){
            magia->setText("Orcamadonna");
        }
        void edit_fisico(){
            fisico->setText("Stronziddio");
        }

};

*/

int main(int argc, char *argv[]) {
  QApplication App(argc, argv);
  megamerda m;
  m.show();
  return App.exec();
}
