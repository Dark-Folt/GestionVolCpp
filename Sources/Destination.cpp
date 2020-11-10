
#include <iostream>
#include "../Headers/Destination.hpp"

using std::cout;
using std::endl;
using std::setw;
using std::string;
using std::ostringstream;

Destination::Destination()
{
    std::cout << "Vous ne pouvez pas creer une destination vide" << std::endl;
    exit(-1);
}

Destination::Destination(std::string villeDepart, std::string villeArrivee)
{
    this->villeDepart = villeDepart;
    this->villeArrivee = villeArrivee;
}

Destination::~Destination() { }

//getters
std::string Destination::getVilleDepart()
{
    return this->villeDepart;
}

std::string Destination::getVilleArrivee()
{
    return this->villeArrivee;
}

//setters
void Destination::setVilleDepart(std::string villeDepart)
{
    this->villeDepart = villeDepart;
}

void Destination::setVilleArrivee(std::string villeArrivee)
{
    this->villeArrivee = villeArrivee;
}

string Destination::to_string()
{
    ostringstream r;
    r << "Depart: " << this->villeDepart <<"  --------------->  "<<"Arrivee: "<<this->villeArrivee << endl;
    return r.str();
}

