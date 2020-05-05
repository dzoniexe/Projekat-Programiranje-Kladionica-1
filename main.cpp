#include <iostream>


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
#include "fstream"

//Moja ideja je ova: Kad se program otvori, sistem će pitati čoveka da li je novi korisnik. Biće opcija da se napravi novi ili uloguje. To ću uraditi čitanjem iz fajla. Kada se korisnik uloguje, dobiće svoj startni iznos (u dolarima) i imaće da bira da li želi da ode u kladionicu ili kazino. U kladionici ću  napraviti neki random generator koji će da pravi utakmice i sistem će da izračune kvote. Naravno, tu će biti moguće interaktivno klađenje na simulacije, sve odigrane utakmice će se čuvati za tog korisnika (u fajlu). U kazinu će biti razne igre na kojima sam već počeo da radim. Blackjack, slotovi, rulet, i probaću da napravim i poker. Sve pogođene igre će biti nagrađene, i naravno čuvane u zajednički status... Imam još ideja, ali mislim da je za sada ovo dovoljno.

using namespace std;

int main()
{
    // cout << "Hello world!" << endl;
    citajText("timovi.txt");
    // uradjeno je i pisanje
    // oba se nalaze u tim.hpp
    // Nisam siguran da li sve dobro radi zbog kompajlera, ali bi trebalo da je u redu

    // Srediću projekat za sledeći rok
    return 0;
}
