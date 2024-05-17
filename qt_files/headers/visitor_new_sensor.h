#include "visitor.h"
#include <QWidget>

class visitor_new_sensor : public ::visitor {
public:
  QWidget *visit(erba *) override;
  QWidget *visit(acqua *) override;
  QWidget *visit(fisico *) override;
  QWidget *visit(fuoco *) override;
  QWidget *visit(sacro *) override;
};
