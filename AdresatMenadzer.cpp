#include "AdresatMenadzer.h"

void AdresatMenadzer::dodajAdresata()
{
    Adresat adresat;
//    idZalogowanegoUzytkownika = uzytkownikMenadzer.pobierzIdZalogowanegoUzytkownika();
    //system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;

    adresat = podajDaneNowegoAdresata();
    adresaci.push_back(adresat);

    if(plikZAdresatami.dopiszAdresataDoPliku(adresat))
    {
        cout << "Nowy adresat zostal dodany" << endl;
    }
    else
        cout << "Blad. Nie udalo sie dodac nowego adresata do pliku." << endl;

    //++idOstatniegoAdresata; // u artura tak nie jest!!!!
}

Adresat AdresatMenadzer::podajDaneNowegoAdresata()
{
    Adresat adresat;

    adresat.ustawId((plikZAdresatami.pobierzIdOstatniegoAdresata() + 1));
    adresat.ustawIdUzytkownika(ID_ZALOGOWANEGO_UZYTKOWNIKA);

    cout << "Podaj imie: ";
    adresat.ustawImie(MetodyPomocnicze::wczytajLinie());
    adresat.ustawImie(MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.pobierzImie()));

    cout << "Podaj nazwisko: ";
    adresat.ustawNazwisko(MetodyPomocnicze::wczytajLinie());
    adresat.ustawNazwisko(MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.pobierzNazwisko()));

    cout << "Podaj numer telefonu: ";
    adresat.ustawNrTelefonu(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj email: ";
    adresat.ustawEmail(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj adres: ";
    adresat.ustawAdres(MetodyPomocnicze::wczytajLinie());

    return adresat;
}

/*void AdresatMenadzer::wczytajAdresatowZalogowanegoUzytkownikaZPliku()
{
    idOstatniegoAdresata = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(adresaci, idZalogowanegoUzytkownika);
}
*/
 void AdresatMenadzer::wyswietlWszystkichAdresatow()
 {

 }
