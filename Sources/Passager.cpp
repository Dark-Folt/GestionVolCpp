#include <iostream>
#include <iomanip>
#include <sstream>
#include "../Headers/Passager.hpp"

using std::cout;
using std::endl;
using std::setw;
using std::string;
using std::ostringstream;


Passager::Passager()
{
    cout << "Vous ne pouver pas creer un passage vide" << endl;
    exit(-1);
}

Passager::Passager(string nom, string prenom, string numPassport, unsigned short int age, Titre titre)
:nom(nom), prenom(prenom), numPassport(numPassport), age(age), titre(titre)
{ }

Passager::~Passager()
{ } 

//getters
string Passager::getNom()
{
    return this->nom;
}

string Passager::getPrenom()
{
    return this->prenom;
}

string Passager::getNumPassport()
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
void Passager::setNom(string nom)
{
    this->nom = nom;
}

void Passager::setPrenom(string prenom)
{
    this->prenom = prenom;
}

void Passager::setNumPassport(string numPassport)
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


//services

string Passager::to_string()
{
    ostringstream r;
    r << "Nom: " << this->nom << setw(40) << "Age: " << this->age << endl; 
    r << "Prenom: " << this->prenom << endl; 
    r << "Numero Passeport: " << this->numPassport << endl; 
    return r.str();
}




