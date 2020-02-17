#ifndef UZYTKOWNIKMENADZER_H
#define UZYTKOWNIKMENADZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <sstream>
#include <fstream>


#include "Uzytkownik.h"
#include "PlikZUzytkownikami.h"
//#include "AdresatMenadzer.h"

using namespace std;

class UzytkownikMenadzer
{
    PlikZUzytkownikami plikZUzytkownikami;

    int idZalogowanegoUzytkownika;
    vector <Uzytkownik> uzytkownicy;

    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);

public:
    UzytkownikMenadzer(string nazwaPlikuZUzytkownikami) : plikZUzytkownikami(nazwaPlikuZUzytkownikami) {};

    int pobierzIdZalogowanegoUzytkownika();

    void rejestracjaUzytkownika();
    void logowanieUzytkownika();
    void wylogowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void wczytajUzytkownikowZPliku();
    //void zapiszWszystkichUzytkownikowDoPliku();
};
#endif
