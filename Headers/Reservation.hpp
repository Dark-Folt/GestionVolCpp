#ifndef __RES_H_
#define __RES_H_

#include <string>
using std::string;

class Reservation
{
    private:
        string numReservation;
        string numPassport;
        string numVol;
        bool   confirme;

    public:
        //constructeur et destructeur
        Reservation();
        Reservation(string, string, string, bool);
        ~Reservation();

        //getters
        string  getNumReservation();
        string  getNumPassport();
        string  getNumVol();

        //setters
        void    setNumReservation(string);
        void    setNumPassport(string);
        void    setNumVol(string);
    
        //services
        bool    isConfirme();
        string  to_string(); 
};
#endif