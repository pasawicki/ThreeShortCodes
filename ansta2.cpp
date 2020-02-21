#include <iostream>
using namespace std;

void brak(int t[], int dlugoscTab, int zakres)
{
    bool sprawdz[zakres+1]; //dodatkowa tablica sprawdzaj¹ca
    for (int i=1; i<=zakres; i++) sprawdz[i]=false; //wype³nienie jej pól fa³szami dla bezpieczeñstwa
    for (int i=0; i<dlugoscTab; i++) sprawdz[t[i]]=true; //zaznaczenie pól opisanych w badanej tablicy
    for (int i=1; i<=zakres; i++) if (!(sprawdz[i])) cout << i << " "; //wypisanie rezultatów na standardowe wyjœcie
}

int main()
{
    int tab[5] = {2, 3, 7, 4, 9};
    brak(tab, 5, 10);
}
