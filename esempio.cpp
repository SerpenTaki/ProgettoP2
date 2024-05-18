#include <QComboBox>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>

class SensoriWindow : public QWidget {
  Q_OBJECT

public:
  SensoriWindow(QWidget *parent = nullptr) : QWidget(parent) {
    QVBoxLayout *layout = new QVBoxLayout(this);
    QComboBox *comboBox = new QComboBox(this);
    comboBox->addItem("Temperatura",
                      QVariant::fromValue(SensoreFactory::TEMPERATURA));
    comboBox->addItem("Umidità", QVariant::fromValue(SensoreFactory::UMIDITA));
    // Aggiungere altri sensori alla comboBox

    QPushButton *addButton = new QPushButton("Aggiungi Sensore", this);
    connect(addButton, &QPushButton::clicked, [=]() {
      SensoreFactory::TipoSensore tipo =
          static_cast<SensoreFactory::TipoSensore>(
              comboBox->currentData().toInt());
      Sensore *sensore = SensoreFactory::creaSensore(tipo);
      if (sensore) {
        sensori.append(sensore);
        // Aggiungere il sensore alla GUI o fare altre operazioni necessarie
      }
    });

    layout->addWidget(comboBox);
    layout->addWidget(addButton);
    setLayout(layout);
  }

  ~SensoriWindow() {
    for (Sensore *sensore : sensori) {
      delete sensore;
    }
  }

private:
  QList<Sensore *> sensori;
};
