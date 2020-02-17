#ifndef ADRESATMENADZER_H
#define ADRESATMENADZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <sstream>
#include <fstream>

#include "UzytkownikMenadzer.h"
#include "Adresat.h"
#include "PlikZAdresatami.h"

using namespace std;

class AdresatMenadzer
{
    //UzytkownikMenadzer uzytkownikMenadzer;
    PlikZAdresatami plikZAdresatami;

    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    vector <Adresat> adresaci;

    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
    void wyswietlDaneAdresata();

public:

    void ustawIdZalogowanegoUzytkownika(int noweIdZalogowanegoUzytkownika);
    int pobierzIdZalogowanegoUzytkownika();
    void dodajAdresata();
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    void wyswietlWszystkichAdresatow();
};

#endif
