#ifndef DUMMY_H
#define DUMMY_H

/* 
NOTA PER ELIO:
Ho creato questa classe perchè alla fine prendere la healthbar nel sensore non ha molto senso
 e secondo me così è ancora più facile posi passare dei dati alle altre classi, quindi trattiamo il danno
 fuori da quello che è il personaggio 
*/

class Dummy{
private:
    static double healthbar;
public:
    Dummy();
    ~Dummy();
    double getHelth();
};

#endif