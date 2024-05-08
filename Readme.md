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
--
## Classe Pesonaggio
**Metodi**
- getHealth()
- getLivello()
- getDifesa()
- getArmatura()

**Campi Dati**:
- double HealthBar
- int Livello
- double Difesa
- int(?) Armatura

--
## Classe Sensore (*Questa è la classe base astratta*)
**Metodi virtuali**:
- calcolaDanno()
- getDanno()
- getProbabilita()
- Accetta() //*design pattern?*
- getStamina()
- getMana()

**Campi Dati**:
- double danno;
- int probabilita;
- double stamina;
- double mana;

--

