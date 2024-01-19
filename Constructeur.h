//Victoria Turek

#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "Voiture.h"

class Constructeur{
    public :
    Constructeur(std::string _nom, Voiture _voiture, int _experience = 0);
    std::string getNom();
    int getExperience();
    Voiture getvoiture();

    private:
    std::string nom;
    int experience;
    Voiture voiture;
};

std::string infoConstructeur(Constructeur _infoC);