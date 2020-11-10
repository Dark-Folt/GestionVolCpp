#ifndef __VOL_H
#define __VOL_H

#include <string>

#include "Destination.hpp"
#include "DateT.hpp"

class Vol
{
    private:
        std::string     numVol;
        long            nbPlaceMax;
        float           prix;
        Destination     *destination;
        DateT           *date;
    

    public:
        //constructeur et destructeur
        Vol();
        Vol(std::string, long, float, Destination *, DateT *);
        ~Vol();

        //getters
        std::string     getNumVol();
        long            getNbPlaceMax();
        float           getPrix();
        Destination *   getDestination();
        DateT *         getDate();

        //setters
        void            setNumVol(std::string);
        void            setNbPlaceMax(long);
        void            setPrix(float);
        void            setDestination(Destination *);
        void            setDate(DateT *);
};
#endif