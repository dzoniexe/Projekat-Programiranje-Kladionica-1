#ifndef LIGA_HPP_INCLUDED
#define LIGA_HPP_INCLUDED

#include "sport.hpp"
#include "tim.hpp"


using namespace std;

class Liga
{
private:
    string ime;
    string drzava;
    Tim t;
public:
    Liga(string lime, string ldrzava, sport ts, string time, string tdrzava, string tmesto, string iime, string iprezime, int igodine, string idrzava, string mime, string mprezime, int mgodine, string mdrzava, int tratingHome, int tratingAway):Tim( ts, time, tdrzava, tmesto, iime, iprezime, igodine, idrzava, mime, mprezime, mgodine, mdrzava, tratingHome, tratingAway){
       ime = lime;
       drzava = ldrzava;
    }
    };

#endif // LIGA_HPP_INCLUDED
