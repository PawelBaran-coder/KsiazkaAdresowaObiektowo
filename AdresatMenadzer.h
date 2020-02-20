#ifndef ADRESATMENADZER_H
#define ADRESATMENADZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <sstream>
#include <fstream>

//#include "UzytkownikMenadzer.h"
#include "Adresat.h"
#include "PlikZAdresatami.h"

using namespace std;

class AdresatMenadzer
{
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;

    Adresat podajDaneNowegoAdresata();
    void wyswietlDaneAdresata();

public:
    AdresatMenadzer(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika)
        :plikZAdresatami(nazwaPlikuZAdresatami), ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika)
    {
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };
    void dodajAdresata();
    //void wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika); // u artura tego nie ma!!!
    void wyswietlWszystkichAdresatow();
};

#endif
