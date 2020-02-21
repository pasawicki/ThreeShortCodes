#include <iostream>
using namespace std;

struct Decimal
{
    //struktura trzymaj¹ca u³amki dziesiêtne
    int dziesieciokrotnosc;
};

void wylistuj (Decimal start, Decimal skok, int dlugosc, Decimal tabWynikow[])
{
    //prosta funkcja listuj¹ca z¹³o¿one u³amki dziesiêtne
    for (int i=0; i<dlugosc; i++) tabWynikow[i].dziesieciokrotnosc = start.dziesieciokrotnosc+i*skok.dziesieciokrotnosc;
}

void wypisz (Decimal co)
{
    //prosta funkcja wypisuj¹ca u³amek dziesiêtny
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
