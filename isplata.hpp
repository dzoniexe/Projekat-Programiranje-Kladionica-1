#ifndef ISPLATA_HPP_INCLUDED
#define ISPLATA_HPP_INCLUDED
#include "Tiket.hpp"

enum sport {fudbal, kosarka, odbojka, rukomet};


using namespace std;

class Isplata
{
private:
    Tiket t;
    int kolicina;
    Korisnik isplataKorisnik;
};

#endif // ISPLATA_HPP_INCLUDED
