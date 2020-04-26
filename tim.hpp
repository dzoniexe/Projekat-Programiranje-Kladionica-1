#ifndef TIM_HPP_INCLUDED
#define TIM_HPP_INCLUDED

#include "sport.hpp"
#include "igrac.hpp"
#include "menadzer.hpp"
#include "liga.hpp"

enum sport {fudbal, kosarka, odbojka, rukomet};

using namespace std;

class Tim
{
private:
    sport s;
    string ime;
    string drzava;
    string mesto;
    Igrac b;
    Menadzer m;
    int ratingHome;
    int ratingAway;
public:
    Tim(sport ts, string time, string tdrzava, string tmesto, string iime, string iprezime, int igodine, string idrzava, string mime, string mprezime, int mgodine, string mdrzava, int tratingHome, int tratingAway):Igrac(iime, iprezime, igodine, idrzava), Menadzer(mime, mprezime, mgodine, mdrzava)
    {
        s = ts;
        ime = time;
        drzava = tdrzava;
        mesto = tmesto;
        ratingHome = tratingHome;
        ratingAway = tratingAway;
    }
};

#endif // TIM_HPP_INCLUDED
