## Definizione della gerarchia

```mermaid
flowchart TD
A[Personaggio]
B{Sensore} --> C[Contundente]
B --> D[Magico]
C --> E(Taglio)
C --> F(Percussione)
E --> G(Abrasione)
F --> G
D --> H(Fuoco)
D --> I(Acqua)
````

## Classe Pesonaggio