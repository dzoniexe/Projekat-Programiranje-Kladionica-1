#ifndef MENADZER_HPP_INCLUDED
#define MENADZER_HPP_INCLUDED
#include "sport.hpp"
#include "tim.hpp"



using namespace std;

class Menadzer
{
private:
    string name;
    string surname;
    int age;
    string country;
    static int brojMenadzera;
public:
    Menadzer(string mime, string mprezime, int mgodine, string mdrzava)
    {
        name = mime;
        surname = mprezime;
        age = mgodine;
        country = mdrzava;

    }

    friend ostream& operator<<(ostream& izlaz, Menadzer& m);





};



#endif // MENADZER_HPP_INCLUDED
