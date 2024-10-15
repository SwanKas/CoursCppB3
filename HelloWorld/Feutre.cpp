#include "Feutre.h"
#include <iostream>

std::string reset("\033[0m");

// Constructeur
Feutre::Feutre(const std::string& couleurFeutre) : couleur(couleurFeutre), bouche(true) {}

// Destructeur
Feutre::~Feutre() {
    std::cout << "Destruction du feutre." << std::endl;
}

// Getter couleur
std::string Feutre::getCouleur() const {
    return couleur;
}

bool Feutre::estBouche() const {
    return bouche;
}

void Feutre::Debouche() {
    bouche = false;
}

void Feutre::Bouche() {
    bouche = true;
}

void Feutre::EcrireMessage(const std::string& message) const {
    if (!bouche) {
        std::cout << couleur << message << reset; 
    }
    else {
        std::cout << "Le feutre est bouche, impossible d ecrire." << std::endl;
    }
}
