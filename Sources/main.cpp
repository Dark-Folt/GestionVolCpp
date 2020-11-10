#include <iostream>
#include "Reservation.cpp"
#include "Vol.cpp"
#include "DateT.cpp"
#include "Destination.cpp"
#include "Passager.cpp"

using std::cout;
using std::endl;
using std::setw;
using std::string;


int main()
{
    DateT d1(3,5,2019,14,2);
    DateT d2(3,5,2019,14,2);
    Destination de("Paris","Lyon");
    Reservation r1("125FCQ","675FGDF","FYEGFZE",true);
    Vol v1("65DZAF",6467,4.5,&de,&d2);
    Passager p1("Kamil","Ben","FE87FZE",20,M);
    // cout << p1.to_string();
    // cout << r1.to_string();
    // cout << de.to_string();
    cout << v1.to_string();

    return 0;
}