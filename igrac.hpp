#ifndef IGRAC_HPP_INCLUDED
#define IGRAC_HPP_INCLUDED

#include "sport.hpp"
#include "igrac.hpp"
#include "menadzer.hpp"
#include "tim.hpp"
#include "isplata.hpp"
#include "uplata.hpp"
#include "tiket.hpp"
#include "utakmica.hpp"
#include "korisnik.hpp"
#include "liga.hpp"



using namespace std;

class Igrac
{
protected:
    string ime;
    string prezime;
    int godine;
    string drzava;
public:
    Igrac(string iime, string iprezime, int igodine, string idrzava)
    {
        ime = iime;
        prezime = iprezime;
        godine = igodine;
        drzava = idrzava;
    }
    friend ostream& operator<<(ostream& izlaz, Igrac& i);

};

//class Klasa : public Igrac
//{
//protected:
//    sport s;
//public:
//    Klasa(string iime, string iprezime, int igodine, string idrzava, sport s ) : Igrac(iime, iprezime, igodine, idrzava)
 //   {
//
  //  }
//};

#endif // IGRAC_HPP_INCLUDED
