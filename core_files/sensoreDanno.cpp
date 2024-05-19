#include"headers/sensoreDanno.h"

double sensoreDanno::getDanno() const{
    return danno;
}

int sensoreDanno::getProbCrit() const{
    /*random*/
    return probCrit;
}

int sensoreDanno::getProbHit() const{
    /*random*/
    return probHit;
}

vector<double> sensoreDanno::getValoriGrafico() { //l'interfaccia grafica avrà una lista di sensori e la ui andrà a chiamare il get sensore grafico che è condiviso
// con il discorso che chiamano il calcola danno, definisco comportamento generico nella classe astratta ma di specifico ci sarà il calcola danno che cambierà
    vector<double> result;
    for(unsigned int i = 0; i < attacchiPerTurno.size(); i++){
        double dannoPerTurno = attacchiPerTurno[i] * calcolaDanno();
        result.push_back(dannoPerTurno);
    }
    return result;
}//Questa non si ovverrida da nessuna parte

/*
Nel JSON si andrà a definire la lunghezza dell'array ovvero la lunghezza della partita
- ogni posizione sarà il turno
- ogni elemento dell'array sarà il numero degli attacchi in quel determinato turno
- quindi l'utente quando si crea un nuovo sensore specifica: danno, probHit, probCrit + eventuali campi delle classi concrete
- mentre gli attacchi per turno verranno specificati nel file .json o xml
*/