#include <iostream>
#include "../Headers/Vol.hpp"

using std::cout;
using std::endl;
using std::setw;
using std::string;
using std::ostringstream;

//constructeurs
Vol::Vol()
{
    cout << "Vous ne pouvez pas creer un vol vide" << endl;
}

Vol::Vol(string numVol, long nbPlaceMax, float prix, Destination *destination, DateT *date)
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
string Vol::getNumVol()
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

void Vol::setNumVol(string numVol)
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


string Vol::to_string()
{
    ostringstream r;
    r <<"\nDate: " << this->date->getDate();
    r << this->destination->to_string();
    r << "Heue de depart: " << this->date->getHeure() << setw(3) << "Numero de vol: " << this->numVol << endl;
    r << "Nombre de place: " << this->nbPlaceMax << endl;
    r << "Prix: "   << this->prix << endl;
    return r.str();
}