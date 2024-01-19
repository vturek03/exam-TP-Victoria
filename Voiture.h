//Victoria Turek

#pragma once
#include <string>
#include <vector>
#include <iostream>
enum Type { Diesel, Essence, Electrique };
class Voiture{
    public:
    Voiture(std::string model, Type type, int year, int km);
    
    int setKm(int _newKm);
    
    std::string getModel();
    Type getType();
    int getYear();
    int getKm();

    private:
    std::string model;
    Type type;
    int year;
    int km;
    int newKm;
};

std::string infoVoiture(Voiture _infoV);