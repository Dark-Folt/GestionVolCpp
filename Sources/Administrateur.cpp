#include <iostream>
#include "../Headers/Administrateur.hpp"



Administrateur::Administrateur()
{
    std::cout << "Vous ne pouvez pas creer un admin avec des champs vides" << std::endl;
    exit(-1);
}


Administrateur::Administrateur(std::string identifiant, std::string motDePasse)
{
    this->identifiant = identifiant;
    this->motDePasse = motDePasse;
}

Administrateur::~Administrateur() { }

//getters
std::string Administrateur::getIdentifiant()
{
    return this->identifiant;
}

std::string Administrateur::getMotDePasse()
{
    return this->motDePasse;
}

//setters
void Administrateur::setIdentifiant(std::string identifiant)
{
    this->identifiant = identifiant;
}

void Administrateur::setMotDePasse(std::string motDePasse)
{
    this->motDePasse = motDePasse;
}