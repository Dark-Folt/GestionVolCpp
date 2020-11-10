#ifndef __DEST_H_
#define __DEST_H_
#include <string>

class Destination
{
    private:
        std::string villeDepart;
        std::string villeArrivee;

    public:
        //constructeur et descructeur
        Destination();
        Destination(std::string, std::string);
        ~Destination();

        //getters
        std::string  getVilleDepart();
        std::string  getVilleArrivee();

        //setters
        void        setVilleDepart(std::string);
        void        setVilleArrivee(std::string);
};
#endif