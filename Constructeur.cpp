//Victoria Turek

#include "Constructeur.h"

Constructeur::Constructeur(std::string _nom, Voiture _voiture, int _experience){
    nom = _nom;
    experience = _experience;
    voiture = _voiture;
}
std::string Constructeur::getNom(){
    return nom;
}
int Constructeur::getExperience(){
    return experience;
}
Voiture Constructeur::getvoiture(){
    return voiture;
}

std::string infoConstructeur(Constructeur _infoC, Voiture _infoV){
    std::string resultatC;
    resultatC = _infoC.getNom() + " (" + _infoC.getExperience() + ") - " + _infoV.getModel() + " , " + _infoV.getType() + ", " + _infoV.getKm();
    if(_infoV.getKm() > 20000){
        resultatC += " - Beaucoup utilisée";
        }
    else{
        resultatC += " - Faiblement utilisée";
    }
    return resultatC;
}