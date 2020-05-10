#ifndef ISPLATA_HPP_INCLUDED
#define ISPLATA_HPP_INCLUDED

#include "korisnik.hpp"




using namespace std;

class Isplata
{
private:
    int kolicina;
    Korisnik k;
public:

    Isplata (int k1, string kime, string kprezime, string kusername, int kgodine, int kstatus):k(kime, kprezime, kusername, kgodine, kstatus)
    {
        kolicina = k1;
    }

    int getKolicina ()const{
        return kolicina;
    }
    Korisnik getK()const{
        return k;
    }
    int setKolicina(int kolicina1)
    {
        kolicina1 = kolicina;
    }
    int setKorisnik(Korisnik korisnik1)
    {
        korisnik1 = k;
    }
    void podigniPare()
    {
        int a=k.getStatus()+kolicina;
        k.setStatus(a);
    }
};

#endif // ISPLATA_HPP_INCLUDED
