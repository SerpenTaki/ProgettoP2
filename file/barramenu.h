#include <QAction>
#include <QMenu>
#include <QMenuBar>
#ifndef BMENU_H
#define BMENU_H

class bmenu : public QMenuBar {
private:
  QMenu *file;
  QMenu *simulazione;

public:
  bmenu(QMenuBar *parent = nullptr) : QMenuBar(parent) {
    file = new QMenu("File");
    simulazione = new QMenu("Simulazione");
    QAction *salva = new QAction("Salva");
    QAction *apri = new QAction("Apri");
    QAction *avvia_simulazione = new QAction("Avvia simulazione");
    file->addAction(salva);
    file->addAction(apri);
    simulazione->addAction(avvia_simulazione);
    this->addMenu(file);
    this->addMenu(simulazione);
  }
};
#endif // !BMENU_H
