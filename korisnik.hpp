#ifndef KORISNIK_HPP_INCLUDED
#define KORISNIK_HPP_INCLUDED



using namespace std;

class Korisnik
{
private:
    string ime;
    string prezime;
    string username;
    int godine;
    int status;
    static int brojKorisnika;
public:
    Korisnik(){
        ime = "N/A";
        prezime = "N/A";
        godine = 0;
        status = 0;
        username = "N/A";

    }
    Korisnik(string kime, string kprezime, string kusername, int kgodine, int kstatus){
        ime = kime;
        prezime = kprezime;
        username = kusername;
        godine = kgodine;
        status = kstatus;
        brojKorisnika++;
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
    int getKor()
        {
            return brojKorisnika;
        }
    friend ostream& operator<<(ostream& izlaz, Korisnik& i);

};

int Korisnik :: brojKorisnika = 0;

#endif // KORISNIK_HPP_INCLUDED
