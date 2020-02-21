#include <iostream>
#include <string>
using namespace std;

void kod_pocztowy(string s, string t)
{
    //wz�r przekszta�caj�cy kod na warto�� licznow�, bez walidacji danych
    int minkod = 10000*((int)s[0]-48)+1000*((int)s[1]-48)+100*((int)s[3]-48)+10*((int)s[4]-48)+((int)s[5]-48);
    int makskod = 10000*((int)t[0]-48)+1000*((int)t[1]-48)+100*((int)t[3]-48)+10*((int)t[4]-48)+((int)t[5]-48);
    //p�tla wypisuj�ca warto�ci po�rednie na wyj�cie standardowe zgodnie z formatem
    //gdyby zasz�a potrzeba, oczywi�cie mog�aby wypisywa� w inne miejsce
    for (int i=minkod; i<=makskod; i++)
    {
        int halfcode1 = i/1000; //pierwsza po�owa wypisywanego aktualnie kodu
        int halfcode2 = i%1000; //i druga
        if (halfcode1<10) cout << "0"; //zera orefiksowe, kt�re przecie� nie powstaj� samorzutnie przy dzieleniu
        cout << halfcode1 << "-";
        if (halfcode2<100) cout << "0"; //jak wy�ej
        if (halfcode2<10) cout << "0"; //jak wy�ej
        cout << halfcode2 << "\n";
    }
}

int main()
{
    string kod1 = "79-900";
    string kod2 = "80-155";
    kod_pocztowy(kod1, kod2);
}
