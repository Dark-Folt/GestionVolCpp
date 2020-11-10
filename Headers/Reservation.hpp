#ifndef __RES_H_
#define __RES_H_

#include <string>

class Reservation
{
    private:
        std::string     numReservation;
        std::string     numPassport;
        std::string     numVol;
        bool            confirme;

    public:
        //constructeur et destructeur
        Reservation();
        Reservation(std::string,std::string,std::string, bool);
        ~Reservation();

        //getters
        std::string     getNumReservation();
        std::string     getNumPassport();
        std::string     getNumVol();
        bool            isConfirme();

        //setters
        void            setNumReservation(std::string);
        void            setNumPassport(std::string);
        void            setNumVol(std::string);
};
#endif