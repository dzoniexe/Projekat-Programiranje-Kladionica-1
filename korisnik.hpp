#ifndef KORISNIK_HPP_INCLUDED
#define KORISNIK_HPP_INCLUDED



using namespace std;

class Korisnik
{
private:
    string ime;
    string prezime;
    int godine;
    int status;
public:
    Korisnik(){
        ime = "N/A";
        prezime = "N/A";
        godine = 0;
        status = 0;

    }
    Korisnik(string kime, string kprezime, int kgodine, int kstatus){
        ime = kime;
        prezime = kprezime;
        godine = kgodine;
        status = kstatus;
    }
};

#endif // KORISNIK_HPP_INCLUDED
