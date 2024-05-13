
#include "qboxlayout.h"
#include <QApplication>
#include <QBoxLayout>
#include <QGroupBox>
#include <QLabel>
#include <QPushButton>
#ifndef WORKSPACE_H
#define WORKSPACE_H

class workspace:public QWidget{
private:
    QLabel* magia;
    QLabel* fisico;

public:
    workspace(QWidget*  parent=nullptr): QWidget(parent){
        QHBoxLayout* main = new QHBoxLayout(this);
        QGroupBox* sensori = new QGroupBox;
        QVBoxLayout* l_sensori = new QVBoxLayout; 
        QGroupBox* porcheria = new QGroupBox;
        QVBoxLayout* l_porcheria = new QVBoxLayout;
        QPushButton* edit = new QPushButton("Edit");
        QPushButton* edit2 = new QPushButton("Edit");
        magia = new QLabel("Magia");
        fisico = new QLabel("Fisico");
        // sensori->setLayout(porcheria);
        // sensori->setLayout(porcheria);
        sensori->setLayout(l_sensori);
        porcheria->setLayout(l_porcheria);
        l_sensori->addWidget(magia);
        l_sensori->addWidget(edit);
        l_porcheria->addWidget(fisico);
        // sensori->addWidget(magia);
        /*
        porcheria->addWidget(magia);
        porcheria->addWidget(edit);
        porcheria->addWidget(fisico);
        porcheria->addWidget(edit2);
        */
        main->addWidget(sensori);
        main->addWidget(porcheria);
        connect(edit, &QPushButton::clicked, this, &workspace::edit_magia);
        connect(edit2, &QPushButton::clicked, this, &workspace::edit_fisico);
    }
    public slots:
        void edit_magia(){
            magia->setText("Orcamadonna");
        }
        void edit_fisico(){
            fisico->setText("Stronziddio");
        }

};

#endif