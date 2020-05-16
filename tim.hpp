
#ifndef TIM_HPP_INCLUDED
#define TIM_HPP_INCLUDED
#include "fstream"
#include "sport.hpp"
#include "igrac.hpp"
#include "menadzer.hpp"
#include "liga.hpp"

#include <vector>

enum sport {fudbal, kosarka, odbojka, rukomet};

using namespace std;

class Tim
{
private:
    sport s;
    string ime;
    string drzava;
    string mesto;
    vector<Igrac*> b;
    Menadzer m;
    int ratingHome;
    int ratingAway;
public:
    Tim(sport ts, string time, string tdrzava, string tmesto, string mime, string mprezime, int mgodine, string mdrzava, int tratingHome, int tratingAway):m(mime, mprezime, mgodine, mdrzava)
    {
        s = ts;
        ime = time;
        drzava = tdrzava;
        mesto = tmesto;
        ratingHome = tratingHome;
        ratingAway = tratingAway;
    }

    void dodaj(Igrac* i){
        b.push_back(i);
    }

    void ispisiIgrac(){
        cout<<"Lista Igraca: "<<endl;

        for (auto it=b.begin(); it<b.end(); it++){
            (*it)->statb();

        }
    }








};
/*
void pisiText(string timovi, string tekst)
{
    ofstream fajl;
    fajl.open (timovi);
    fajl << tekst << endl;
    fajl.close();
}

void citajText(string filename)
{
    string linija;
    ifstream fajl (filename);
    if (fajl.is_open())
    {
        while ( getline (fajl,linija) )
        {
           cout << linija << '\n';
        }
        fajl.close();
    }

    else
        cout << "Nece";
}
*/
#endif // TIM_HPP_INCLUDED
