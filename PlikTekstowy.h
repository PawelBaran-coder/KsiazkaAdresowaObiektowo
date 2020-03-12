#ifndef PLIKTEKSTOWY_H
#define PLIKTEKSTOWY_H

#include <iostream>


using namespace std;

class PlikTekstowy
{
    const string NAZWA_PLIKU_Z_UZYTKOWNIKAMI;
    const string NAZWA_PLIKU_Z_ADRESATAMI;
    const string NAZWA_TYMCZASOWEGO_PLIKU_Z_ADRESATAMI;

public:

    PlikTekstowy(string nazwaPliku, string nazwaPlikuZAdresatami, string nazwaTymczasowegoPlikuZAdresatami)
        : NAZWA_PLIKU_Z_UZYTKOWNIKAMI(nazwaPliku), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami), NAZWA_TYMCZASOWEGO_PLIKU_Z_ADRESATAMI(nazwaTymczasowegoPlikuZAdresatami)
    {}

    string pobierzNazwePliku();
    string pobierzNazwePlikuZAdresatami();
    string pobierzNazweTymczasowegoPlikuZAdresatami();
    bool czyPlikJestPusty();

};
#endif
