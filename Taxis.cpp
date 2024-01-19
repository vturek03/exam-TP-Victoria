//Victoria Turek

#include "Taxis.h"
#include "Voiture.h"

Taxis::Taxis(std::string _nom){
    nom = _nom;
}
std::string Taxis::getNom(){
    return nom;
}
std::string infoTaxis(Taxis _infoT, Voiture _infoV){
    std::string resultatT;
    resultatT = _infoT.getNom() + ", " + _infoV.getKm();
    if(_infoV.getKm() > 20000){
        resultatT += " - Beaucoup utilisée";
        }
    else{
        resultatT += " - Faiblement utilisée";
    }
    return resultatT;
}
