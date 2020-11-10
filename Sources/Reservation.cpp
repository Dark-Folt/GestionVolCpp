#include <iostream>
#include "../Headers/Reservation.hpp"

Reservation::Reservation()
{
    std::cout << "Vous ne pouvez pas creer une reservation vide" << std::endl;
    exit(1);
}

Reservation::Reservation(std::string numReservation, std::string numPassport, std::string numVol, bool confirme)
{
    this->numReservation = numReservation;
    this->numPassport = numPassport;
    this->numVol = numVol;
    this->confirme = confirme;
}

Reservation::~Reservation()
{
    std::cout << "destruction" << std::endl;
}

//getters
std::string Reservation::getNumReservation()
{
    return this->numReservation;
}

std::string Reservation::getNumPassport()
{
    return this->numPassport;
}

std::string Reservation::getNumVol()
{
    return this->numVol;
}

//setters
void Reservation::setNumReservation(std::string numReservation)
{
    this->numReservation = numReservation;
}

void Reservation::setNumPassport(std::string numPassport)
{
    this->numPassport = numPassport;
}

void Reservation::setNumVol(std::string numVol)
{
    this->numVol = numVol;
}

//services
bool Reservation::isConfirme()
{
    return this->confirme;
}
