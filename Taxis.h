//Victoria Turek

#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "Voiture.h"

class Taxis{
    public :
    Taxis(std::string _nom);
    std::string getNom();

    private:
    std::string nom;
};

std::string infoTaxis(Taxis _infoT);