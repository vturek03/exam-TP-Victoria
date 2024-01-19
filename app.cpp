//Victoria Turek
#include <iostream>
#include "Voiture.h"
#include "Constructeur.h"
#include "Taxis.h"

int main() {
    
    /* Début question 2*/
    Voiture voiture1 = Voiture("Tesla Model 3", Electrique, 2022, 30000);
    std::cout << infoVoiture(voiture1) << std::endl;
    Voiture voiture2 = Voiture("Citroen C3", Essence, 2020, 100000);
    std::cout << infoVoiture(voiture2) << std::endl;
    /* Fin question 2*/
    /* Début question 4*/
    Constructeur constructeur1 = Constructeur("Elon Musk", voiture1, 75);
    std::cout << infoConstructeur(constructeur1) << std::endl;
    /* Fin question 4*/
    /* Début question 6*/
    Taxis taxis1 = Taxis("G7");
    std::cout << infoTaxis(taxis1) << std::endl;
    return 0;
}