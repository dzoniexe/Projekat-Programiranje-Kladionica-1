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
    int id;
    string ime;
    string prezime;
    int godine;
    string drzava;
public:
    Igrac(int iid, string iime, string iprezime, int igodine, string idrzava)
    {
        id = iid;
        ime = iime;
        prezime = iprezime;
        godine = igodine;
        drzava = idrzava;
    }
    friend ostream& operator<<(ostream& izlaz, Igrac& i);

    int getId()const{
        return id;
    }
    string getIme ()
    {
        return ime;
    }
    string getPrezime ()
    {
        return prezime;
    }
    virtual void nekiispis()
    {
        cout<<ime<<" "<<prezime<<" je u timu"<<endl;
    }
    virtual void ispisss(){
        cout<<id<<endl;
        cout<<ime<<endl;
        cout<<prezime<<endl;
        cout<<godine<<endl;
        cout<<drzava<<endl;
        cout<<endl;
    }
};

class PrviTim: public Igrac{
protected:
    bool prvitim;
public:
    PrviTim(int iid, string iime, string iprezime, int igodine, string idrzava, bool prvitim = true) : Igrac(iid, iime, iprezime, igodine, idrzava){
        this->prvitim = prvitim;
    }
    void nekiispis(){
        Igrac::nekiispis();
        if(prvitim){
            cout<<"Igra u prvom timu"<<endl;
        }
        else{
            cout<<"Ne igra u prvom timu"<<endl;
        }
    }
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
