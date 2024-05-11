#include "qboxlayout.h"
#include "qwidget.h"
#include <QApplication>
#include <QLabel>
#include <QBoxLayout>

class megamerda:public QWidget{
public: 
    megamerda(QWidget*  parent=nullptr): QWidget(parent){
        QVBoxLayout* main = new QVBoxLayout(this);
        main->addWidget(new QLabel("Caccamerda"));
        main->addWidget(new QLabel("Merdaculo"));
        
        
    }
};
    
int main(int argc, char *argv[]) {
    QApplication App(argc, argv);
    megamerda m;
    m.show();
    return App.exec();
}
