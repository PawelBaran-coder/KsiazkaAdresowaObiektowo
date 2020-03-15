#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "PlikTekstowy.h"

using namespace std;

class PlikZAdresatami : public PlikTekstowy
{
    int idOstatniegoAdresata;

    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneAdresataOddzielonePionowymiKreskami);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzZPlikuIdOstatniegoAdresata();
    void usunPlik(string NAZWA_PLIKU_Z_ADRESATAMI);
    void zmienNazwePliku(string NAZWA_TYMCZASOWEGO_PLIKU_Z_ADRESATAMI, string NAZWA_PLIKU_Z_ADRESATAMI);

public:
    PlikZAdresatami(string nazwaPliku, string nazwaPlikuZAdresatami, string nazwaTymczasowegoPlikuZAdresatami)
        : PlikTekstowy(nazwaPliku, nazwaPlikuZAdresatami, nazwaTymczasowegoPlikuZAdresatami)
    {
        idOstatniegoAdresata = 0;
    }
    bool dopiszAdresataDoPliku(Adresat adresat);
    void usunWybranegoAdresataZPliku(int idUsuwanegoAdresata);
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    int pobierzIdOstatniegoAdresata();
    void edytujAdresataWPliku(Adresat adresat, int idEdytowanegoAdresata);

};
#endif
