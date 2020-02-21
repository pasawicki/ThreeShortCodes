#include <iostream>
using namespace std;

void brak(int t[], int dlugoscTab, int zakres)
{
    bool sprawdz[zakres+1]; //dodatkowa tablica sprawdzaj�ca
    for (int i=1; i<=zakres; i++) sprawdz[i]=false; //wype�nienie jej p�l fa�szami dla bezpiecze�stwa
    for (int i=0; i<dlugoscTab; i++) sprawdz[t[i]]=true; //zaznaczenie p�l opisanych w badanej tablicy
    for (int i=1; i<=zakres; i++) if (!(sprawdz[i])) cout << i << " "; //wypisanie rezultat�w na standardowe wyj�cie
}

int main()
{
    int tab[5] = {2, 3, 7, 4, 9};
    brak(tab, 5, 10);
}
