#ifndef UPLATA_HPP_INCLUDED
#define UPLATA_HPP_INCLUDED

#include "korisnik.hpp"

using namespace std;
class Uplata
{
private:
    int kolicina;
    Korisnik k;
public:
    Uplata (int k1, string kime, string kprezime, string kusername, int kgodine, int kstatus):k(kime, kprezime, kusername, kgodine, kstatus){
        kolicina = k1;
    }

    int getKolicinaa ()const{
        return kolicina;
    }
    Korisnik getKo()const{
        return k;
    }
    int setKolicina(int kolicina2){
        kolicina2 = kolicina;
    }
    int setKorisnik(Korisnik korisnik2){
        korisnik2 = k;
    }
    void dodajPare()
    {
        int a=k.getStatus()-kolicina;
        k.setStatus(a);
    }
};

#endif // UPLATA_HPP_INCLUDED
