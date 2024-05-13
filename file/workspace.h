
#include "qboxlayout.h"
#include "qgroupbox.h"
#include "qlabel.h"
#include "qlayout.h"
#include "erba.h"
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
    QVBoxLayout* l_sensori;
    
public:
    workspace(QWidget*  parent=nullptr): QWidget(parent){
        QHBoxLayout* main = new QHBoxLayout(this);
        QGroupBox* sensori = new QGroupBox;
        QGroupBox* porcheria = new QGroupBox;
        QVBoxLayout* l_porcheria = new QVBoxLayout;
        QPushButton* edit = new QPushButton("Edit");
        QPushButton* b_addsensore = new QPushButton("Add Sensor");
        QPushButton* edit2 = new QPushButton("Edit");
        l_sensori = new QVBoxLayout;

        magia = new QLabel("Magia");
        fisico = new QLabel("Fisico");
        sensori->setLayout(l_sensori);
        porcheria->setLayout(l_porcheria);
        l_sensori->addWidget(b_addsensore);
        l_porcheria->addWidget(fisico);
        main->addWidget(sensori);
        main->addWidget(porcheria);

        connect(edit, &QPushButton::clicked, this, &workspace::edit_magia);
        connect(edit2, &QPushButton::clicked, this, &workspace::edit_fisico);
        connect(b_addsensore, &QPushButton::clicked, this, &workspace::new_sensore);
    }
    public slots:
        void edit_magia(){
            magia->setText("Orcamadonna");
        }
        void edit_fisico(){
            fisico->setText("Stronziddio");
        }
        void new_sensore(){
            QLabel* prova = new QLabel(QString::fromStdString(erba::tipo));
            l_sensori->addWidget(prova);
        }
};

#endif