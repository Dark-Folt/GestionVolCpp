#include <iostream>
#include "../Headers/Vol.hpp"

//constructeurs
Vol::Vol()
{
    std::cout << "Vous ne pouvez pas creer un vol vide" << std::endl;
}

Vol::Vol(std::string numVol, long nbPlaceMax, float prix, Destination *destination, DateT *date)
{
    this->numVol = numVol;
    this->nbPlaceMax = nbPlaceMax;
    this->prix = prix;
    this->destination = destination;
    this->date = date;
}

Vol::~Vol()
{

}


//getters
std::string Vol::getNumVol()
{
    return this->numVol;
}

long Vol::getNbPlaceMax()
{
    return this->nbPlaceMax;
}

float Vol::getPrix()
{
    return this->prix;
}

Destination * Vol::getDestination()
{
    return this->destination;
}

DateT * Vol::getDate()
{
    return this->date;
}


//setters

void Vol::setNumVol(std::string numVol)
{
    this->numVol = numVol;
}

void Vol::setNbPlaceMax(long nbPlaceMax)
{
    if(nbPlaceMax > 0)
        this->nbPlaceMax = nbPlaceMax;
}


void Vol::setPrix(float prix)
{
    if(prix > 0)
        this->prix = prix;
}

void Vol::setDestination(Destination *destination)
{
    this->destination = destination;
}

void Vol::setDate(DateT *date)
{
    this->date = date;
}

