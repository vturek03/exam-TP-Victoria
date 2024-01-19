//Victoria Turek

#include "Voiture.h"

Voiture::Voiture(std::string _model, Type _type, int _year, int _km){
    model = _model;
    type = _type;
    year = _year;
    km = _km;

}
int Voiture::setKm(){
    km = newKm/(2024-year);
}

std::string Voiture::getModel(){
    return model;
}
Type Voiture::getType(){
    return type;
}
int Voiture::getYear(){
    return year;
}
int Voiture::getKm(){
    return km;
}

std::string infoVoiture(Voiture _infoV){
    std::string resultatV   ;
    resultatV = _infoV.getModel() + " (" + _infoV.getType() + ") - " + _infoV.getYear() + " - " + _infoV.getKm() + " km";
    if(_infoV.getKm() > 20000){
        resultatV += " - Beaucoup utilisée";
        }
    else{
        resultatV += " - Faiblement utilisée";
    }
    return resultatV;
}

