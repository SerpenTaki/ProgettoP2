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
  bmenu(QMenuBar * = nullptr);
};
#endif // !BMENU_H
