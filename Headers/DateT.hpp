#ifndef __DATE_H_
#define __DATE_H_

class DateT
{
    private:
        unsigned int jour;
        unsigned int moi;
        unsigned int annee;
        long heures;
        long minutes;

    public:
        //Constructeurs
        DateT();
        DateT(unsigned int, unsigned int, unsigned int, unsigned long, unsigned  long);
        ~DateT();

        //getters
        unsigned int getJour();
        unsigned int getMoi();
        unsigned int getAnnee();
        long getHeures();
        long getMinutes();

        //setters
        void setJour(unsigned int);
        void setMoi(unsigned int);
        void setAnnee(unsigned int);
        void setHeures(unsigned long);
        void setMinutes(unsigned long);

};
#endif