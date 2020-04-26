#ifndef MENADZER_HPP_INCLUDED
#define MENADZER_HPP_INCLUDED

#include "sport.hpp"
#include "tim.hpp"


using namespace std;

class Menadzer
{
private:
    string ime;
    string prezime;
    int godine;
    string drzava;
public:
    Menadzer(string mime, string mprezime, int mgodine, string mdrzava)
    {
        ime = mime;
        prezime = mprezime;
        godine = mgodine;
        drzava = mdrzava;
    }
};

#endif // MENADZER_HPP_INCLUDED
