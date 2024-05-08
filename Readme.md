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
D --> H(Sacro)
D --> I(Oscuro)
````
---
## Classe Pesonaggio
**Metodi**
- getHealth()
- getLivello()
- getDifesa()
- getArmatura()
- getTipo

**Campi Dati**:
- double HealthBar
- int Livello
- double Difesa (la difesa viene moltiplicata per 2 a seconda del livello dell'armatura)
- short int Armatura (da 1 a 5)
- short int tipo (0 neutro,  1 debole all'oscuro...)

---
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

---
## Classe Contundente
**Metodi Virtuali**:
- effetto()
- consumoStamina()
- critico()

**Metodi**
- sanguinamento()

**Campi Dati**:
- none

---
## Classe Taglio
**Metodi Virtuali**
- getProfondita()

**Metodi**
- getAffilatura()

**Campi dati**:
- int affilatura %
- int Profondità %

---

## Classe Percussione
**Metodo Virtuale**:
- getTempo()

**Campi dati**:
- unsigned int tempo

---

## Abrasione
- Solo metodi ereditati
---

## Classe Magia
**Metodi Virtuali:**
- debolezza()
- consumoMana()
- durataEffetto()
- livelloMagia()

**Campi Dati**:
- none

---

## Classe Sacro
**Metodi**:


---
## Classe Oscuro
**Metodi**:
----

Nella asse delle x del Qchart vado a segnare i turni mentre nella asse y vado a segnare il quantitativo di danno ricevuto ad ogni turno. casuali e non
- rimuovere almeno una classe
- 



