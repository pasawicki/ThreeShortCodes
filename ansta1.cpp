#include <iostream>
#include <string>
using namespace std;

void kod_pocztowy(string s, string t)
{
    //wzór przekszta³caj¹cy kod na wartoœæ licznow¹, bez walidacji danych
    int minkod = 10000*((int)s[0]-48)+1000*((int)s[1]-48)+100*((int)s[3]-48)+10*((int)s[4]-48)+((int)s[5]-48);
    int makskod = 10000*((int)t[0]-48)+1000*((int)t[1]-48)+100*((int)t[3]-48)+10*((int)t[4]-48)+((int)t[5]-48);
    //pêtla wypisuj¹ca wartoœci poœrednie na wyjœcie standardowe zgodnie z formatem
    //gdyby zasz³a potrzeba, oczywiœcie mog³aby wypisywaæ w inne miejsce
    for (int i=minkod; i<=makskod; i++)
    {
        int halfcode1 = i/1000; //pierwsza po³owa wypisywanego aktualnie kodu
        int halfcode2 = i%1000; //i druga
        if (halfcode1<10) cout << "0"; //zera orefiksowe, które przecie¿ nie powstaj¹ samorzutnie przy dzieleniu
        cout << halfcode1 << "-";
        if (halfcode2<100) cout << "0"; //jak wy¿ej
        if (halfcode2<10) cout << "0"; //jak wy¿ej
        cout << halfcode2 << "\n";
    }
}

int main()
{
    string kod1 = "79-900";
    string kod2 = "80-155";
    kod_pocztowy(kod1, kod2);
}
