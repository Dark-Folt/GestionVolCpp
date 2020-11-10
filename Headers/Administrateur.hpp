#ifndef __ADMIN_H_
#define __ADMIN_H_
#include <string>

class Administrateur
{
    private:
        std::string identifiant;
        std::string motDePasse;
    
    public:
        //constructeur et descripteur
        Administrateur();
        Administrateur(std::string, std::string);
        ~Administrateur();

        //getters
        std::string getIdentifiant();
        std::string getMotDePasse();

        //setters
        void        setIdentifiant(std::string);
        void        setMotDePasse(std::string);
};

#endif