# Cazzo è `factory`?
Factory è un design pattern utilizzato in OOP, consta in una classe che racchiude metodi statici 
(non è necessario invocare un oggetto per utilizzarne i metodi) per la creazione di **svariati tipi di oggetti** <br>
Nel concreto:
```mermaid
graph LR
A(Nuova finestra) --> | chiama | B(Factory)
B --> | il quale caga | C(Sensore)

```
## Perché ci sto lavorando? 
Mi sono accorto che non ha ancora senso implementare visitor in quanto visitor serve per la manipolazione dei dati, 
è un design pattern che mi risulterà utile più avanti, non appena avrò risolto questo punto.
