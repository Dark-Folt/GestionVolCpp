#ifndef __DEST_H_
#define __DEST_H_
#include <string>

using std::string;
class Destination
{
    private:
        string villeDepart;
        string villeArrivee;

    public:
        //constructeur et descructeur
        Destination();
        Destination(string, string);
        ~Destination();

        //getters
        string  getVilleDepart();
        string  getVilleArrivee();

        //setters
        void    setVilleDepart(string);
        void    setVilleArrivee(string);

        //services
        string  to_string();
};
#endif