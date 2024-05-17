#include "visitor.h"

class visitor_new_sensor : public ::visitor {
public:
  void visit(erba *er) override;
  void visit(acqua *aq) override;
  void visit(fisico *fi) override;
  void visit(fuoco *fu) override;
  void visit(sacro *sa) override;
};
