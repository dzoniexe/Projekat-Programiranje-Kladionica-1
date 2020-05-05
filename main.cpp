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

//Moja ideja je ova: Kad se program otvori, sistem će pitati čoveka da li je novi korisnik. Biće opcija da se napravi novi ili uloguje. To ću uraditi čitanjem iz fajla. Kada se korisnik uloguje, dobiće svoj startni iznos (u dolarima) i imaće da bira da li želi da ode u kladionicu ili kazino. U kladionici ću  napraviti neki random generator koji će da pravi utakmice i sistem će da izračune kvote. Naravno, tu će biti moguće interaktivno klađenje na simulacije, sve odigrane utakmice će se čuvati za tog korisnika (u fajlu). U kazinu će biti razne igre na kojima sam već počeo da radim. Blackjack, slotovi, rulet, i probaću da napravim i poker. Sve pogođene igre će biti nagrađene, i naravno čuvane u zajednički status... Imam još ideja, ali mislim da je za sada ovo dovoljno.
//P.S. Nadam se da sam uspeo korektno da uradim metode, nisam baš imao ideju gde da ih stavim
using namespace std;
#include <fstream>

void citajTxt(string filename)
{
    string linija;
    ifstream file (filename);
    if (file.is_open())
    {
        while ( getline (file,linija) )
        {
           cout << linija << '\n';
        }
        file.close();
    }

    else
        cout << "Nece";
}

int main()
{
   // cout << "Hello world!" << endl;
    citajTxt("timovi.txt");
    return 0;
}
