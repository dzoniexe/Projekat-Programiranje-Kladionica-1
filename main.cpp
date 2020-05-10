#include <iostream>


#include "sport.hpp"
#include "igrac.hpp"
#include "menadzer.hpp"
//#include "tim.hpp"
#include "isplata.hpp"
#include "uplata.hpp"
#include "tiket.hpp"
#include "utakmica.hpp"
#include "korisnik.hpp"
#include "liga.hpp"
#include <fstream>

//Moja ideja je ova: Kad se program otvori, sistem će pitati čoveka da li je novi korisnik. Biće opcija da se napravi novi ili uloguje. To ću uraditi čitanjem iz fajla. Kada se korisnik uloguje, dobiće svoj startni iznos (u dolarima) i imaće da bira da li želi da ode u kladionicu ili kazino. U kladionici ću  napraviti neki random generator koji će da pravi utakmice i sistem će da izračune kvote. Naravno, tu će biti moguće interaktivno klađenje na simulacije, sve odigrane utakmice će se čuvati za tog korisnika (u fajlu). U kazinu će biti razne igre na kojima sam već počeo da radim. Blackjack, slotovi, rulet, i probaću da napravim i poker. Sve pogođene igre će biti nagrađene, i naravno čuvane u zajednički status... Imam još ideja, ali mislim da je za sada ovo dovoljno.

using namespace std;

    ostream& operator<<(ostream& izlaz, Menadzer& m){
        izlaz<<"Ispis Menadzera: "<<endl<<"Ime: "<<m.ime<<endl;
        cout<<"Prezime: "<<m.prezime<<endl;
        cout<<"Godine: "<<m.godine<<endl;
        cout<<"Drzava: "<<m.drzava<<endl;
        return izlaz;
    }

    ostream& operator<<(ostream& izlaz, Igrac& i){
        izlaz<<"Ispis Igraca: "<<endl<<"Ime: "<<i.ime<<endl;
        cout<<"Prezime: "<<i.prezime<<endl;
        cout<<"Godine: "<<i.godine<<endl;
        cout<<"Drzava: "<<i.drzava<<endl;
        return izlaz;
    }

    ostream& operator<<(ostream& izlaz, Korisnik& k){
        izlaz<<"Ispis Korisnika: "<<endl<<"Ime: "<<k.ime<<endl;
        cout<<"Prezime: "<<k.prezime<<endl;
        cout<<"Username: "<<k.username<<endl;
        cout<<"Godine: "<<k.godine<<endl;
        cout<<"Drzava: "<<k.status<<" $"<<endl;
        return izlaz;
    }

int main()
{
    // cout << "Hello world!" << endl;
 //   citajText("timovi.txt");
    // uradjeno je i pisanje
    // oba se nalaze u tim.hpp
    // Nisam siguran da li sve dobro radi zbog kompajlera, ali bi trebalo da je u redu
    Menadzer m("Jose" ," Mourinho", 57, "Portugal" );
    cout<<m<<endl;
    Igrac i("Gerard", "Pique", 33, "Spain");
    cout<<i<<endl;
    Korisnik k("Nikola", "Pistalovic", "DzoniMaisterNoobSlejer6969ProGamer", 18, 13000);
    cout<<k<<endl;
    Korisnik x("Teodor", "Perunicic", "teofeel", 18, 13000);
    cout<<x<<endl;
    Korisnik korisn;
    int f = korisn.getKor();
    cout<<f<<endl;
    // Srediću projekat za sledeći rok
    return 0;
}
