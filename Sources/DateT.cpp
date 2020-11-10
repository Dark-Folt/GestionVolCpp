#include <iostream>
#include "../Headers/DateT.hpp"


DateT::DateT()
{
    std::cout << "Vous ne pouvez pas creer une Date sans valeur" << std::endl;
    exit(1);
}

DateT::DateT(unsigned int jour, unsigned int moi, unsigned int annee, unsigned long heures, unsigned long minutes)
{
    this->jour =  jour;
    this->moi = moi;
    this->annee = annee;
    this->heures = heures;
    this->minutes = minutes;
}

DateT::~DateT() { }

//getters
unsigned int DateT::getJour()
{
    return this->jour;
}

unsigned int DateT::getMoi()
{
    return this->moi;
}

unsigned int DateT::getAnnee()
{
    return this->annee;
}

long DateT::getHeures()
{
    return this->heures;
}

long DateT::getMinutes()
{
    return this->minutes;
}

//setters
void DateT::setJour(unsigned int jour)
{
    this->jour = jour;
}

void DateT::setMoi(unsigned int moi)
{
    this->moi = moi;
}

void DateT::setAnnee(unsigned int annee)
{
    this->annee = annee;
}

void DateT::setHeures(unsigned long heures)
{
    this->heures = heures;
}

void DateT::setMinutes(unsigned long minutes)
{
    this->minutes = minutes;
}
