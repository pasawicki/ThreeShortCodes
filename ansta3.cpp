#include <iostream>
using namespace std;

struct Decimal
{
    //struktura trzymaj�ca u�amki dziesi�tne
    int dziesieciokrotnosc;
};

void wylistuj (Decimal start, Decimal skok, int dlugosc, Decimal tabWynikow[])
{
    //prosta funkcja listuj�ca z��o�one u�amki dziesi�tne
    for (int i=0; i<dlugosc; i++) tabWynikow[i].dziesieciokrotnosc = start.dziesieciokrotnosc+i*skok.dziesieciokrotnosc;
}

void wypisz (Decimal co)
{
    //prosta funkcja wypisuj�ca u�amek dziesi�tny
    cout << co.dziesieciokrotnosc/10 << "." << co.dziesieciokrotnosc%10 << "\n";
}

int main()
{
    Decimal odtad =
    {
        20
    };
    Decimal otyle =
    {
        5
    };
    Decimal pamiec[8];

    wylistuj(odtad, otyle, 8, pamiec);
    for (int i=0; i<8; i++) wypisz(pamiec[i]);
}
