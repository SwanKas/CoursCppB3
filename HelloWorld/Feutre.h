#pragma once
#include <string>
#include <iostream>

    class Feutre {
    private:
        std::string couleur;  
        bool bouche;          

    public:
        Feutre(const std::string& couleurFeutre);
        ~Feutre();

        std::string getCouleur() const;
        bool estBouche() const;

        void Debouche();
        void Bouche();

        void EcrireMessage(const std::string& message) const;
    };

