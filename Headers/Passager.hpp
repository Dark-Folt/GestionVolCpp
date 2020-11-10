#ifndef __PASSAGER_H
#define __PASSAGER_H
#include <string>
#include "Enum.hpp"

class Passager
{
    private:
        std::string nom;
        std::string prenom;
        std::string numPassport;
        unsigned int age;
        Titre titre; //type enumeration

    public:
        //constructeurs et  //destructeur
        Passager();
        Passager(std::string, std::string, std::string, unsigned int, Titre);
        ~Passager();

        //getters
        std::string getNom();
        std::string getPrenom();
        std::string getNumPassport();
        unsigned int getAge();
        Titre getTitre();

        //setters
        void setNom(std::string);
        void setPrenom(std::string);
        void setNumPassport(std::string);
        void setAge(unsigned int);
        void setTitre(Titre);

};
#endif