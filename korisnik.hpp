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
    string getIme()const
    {
        return ime;
    }
    string getPrezime()const
    {
        return prezime;
    }
    int getGod()const
    {
        return godine;
    }
    int getStatus()const
    {
        return status;
    }
    string setIme(string i1)
    {
        i1 = ime;
    }
    string setPrezime(string p1)
    {
        p1 = prezime;
    }
    int setGod(int g1)
    {
        g1 = godine;
    }
    int setStatus(int s1)
    {
        s1 = status;
    }

};

#endif // KORISNIK_HPP_INCLUDED
