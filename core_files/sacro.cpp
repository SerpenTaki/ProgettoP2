#include "headers/sacro.h"

const std::string sacro::tipo = "Sacro";

int sacro::getLvFede() const{
    return lvFede;
}

int sacro::getlimitBreak() const{
    return limitbreak;
}

bool sacro::checkLimit(){ /*Gestito dalla UI mi fa vincere magari pop-up*/
    if(limitbreak < 100)
        return false;
    else
        return true;
}

double sacro::getHit(){ /*si collega all'interfaccia grafica*/
    if( getProbHit() > 80 ){
        return this->calcolaDanno();
    }
    return 0.0;
}

double sacro::calcolaDanno(){
    double nDanni = getDanno();
    if(lvFede == fedeBassa){
        nDanni = nDanni * 20 / 10;
    }
    else if(lvFede == fedeMedia){
        nDanni = nDanni * 40 / 10;
    }
    else{
        nDanni = nDanni * 65 / 10;
    }
    if (getProbCrit() > 40){
        nDanni = (nDanni * 15)/100;
    }
    updateLimitbreak();
    return nDanni;
}

void sacro::updateLimitbreak(){
    /*Questo metodo mi calcola un numero random da 1 a 10 e mi restituisce il valore aggiornato di limit*/
    int n = 7;
    limitbreak = limitbreak + 7;
}

/*PER mostrare il grafico di limit la UI farà un cast da sensore a sacro. Se il cast va a buon fine chiama la funzione get grafico limit specifica di sacro*/
//SU SACRO GABRIELE QUINDI DOVRAI IMPLEMENTARTI UNA TUA FUNZIONE CHE COMUNQUE SARà SIMILE a quella di sensore danno (nel senso che ritorna un vettore di qualcosa)


void sacro::accept(visitor &visitor){

}