#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt","Adresaci.txt");
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    //ksiazkaAdresowa.rejestracjaUzytkownika();

    ksiazkaAdresowa.logowanieUzytkownika();

    ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();

    ksiazkaAdresowa.dodajAdresata();

    ksiazkaAdresowa.wylogowanieUzytkownika();

    return 0;
}
