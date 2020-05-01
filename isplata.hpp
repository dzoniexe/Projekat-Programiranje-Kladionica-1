#ifndef ISPLATA_HPP_INCLUDED
#define ISPLATA_HPP_INCLUDED
#include "Tiket.hpp"

enum sport {fudbal, kosarka, odbojka, rukomet};


using namespace std;

class Isplata
{
private:
    int kolicina;
    Korisnik k;
public:

    Isplata (int k1, string kime, string kprezime, int kgodine, int kstatus):k(kime, kprezime, kgodine, kstatus){
        kolicina = k1;
    }

    int getKolicina ()const{
        return kolicina;
    }
    Korisnik getK()const{
        return k;
    }
    int setKolicina(int kolicina1){
        kolicina1 = kolicina;
    }
    int setKorisnik(Korisnik korisnik1){
        korisnik1 = korisnik;
    }
    void dodajPare()
    {
        int a=k.getStatus()+kolicina;
        k.setStatus(a);
    }
};

#endif // ISPLATA_HPP_INCLUDED
