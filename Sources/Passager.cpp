#include <iostream>

#include "../Headers/Passager.hpp"


Passager::Passager()
{
    std::cout << "Vous ne pouver pas creer un passage vide" << std::endl;
    exit(-1);
}

Passager::Passager(std::string nom, std::string prenom, std::string numPassport, unsigned short int age, Titre titre)
:nom(nom), prenom(prenom), numPassport(numPassport), age(age), titre(titre)
{ }

Passager::~Passager()
{ } 

//getters
std::string Passager::getNom()
{
    return this->nom;
}

std::string Passager::getPrenom()
{
    return this->prenom;
}

std::string Passager::getNumPassport()
{
    return this->numPassport;
}

unsigned short int Passager::getAge()
{
    return this->age;
}

Titre Passager::getTitre()
{
    return this->titre;
}

//setters
void Passager::setNom(std::string nom)
{
    this->nom = nom;
}

void Passager::setPrenom(std::string prenom)
{
    this->prenom = prenom;
}

void Passager::setNumPassport(std::string numPassport)
{
    this->numPassport = numPassport;
}

void Passager::setAge(unsigned short int age)
{
    this->age = age;
}

void Passager::setTitre(Titre titre)
{
    this->titre = titre;
}