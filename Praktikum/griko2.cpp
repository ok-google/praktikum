#include <iostream>

using namespace std;

void griko2()
{
    char kata[100], ganti[100];
    int indeks, kounter;
    cout<<"Masukan katanya = ";
    cin.getline(kata, 100);
    cout<<"Masukan kata Pengganti = ";
    cin.getline(ganti, 100);
    for(indeks=0; ganti[indeks]!='\0'; indeks++){
        for(kounter=0; kata[kounter]!='\0'; kounter++){
            if(kata[kounter]==ganti[indeks]){
                kata[kounter]='#';
            }
        }
    }
    cout<<kata;
}
