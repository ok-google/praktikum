#include <iostream>
#include <cstring>
using namespace std;

void taufan()
{
    char kopi[100];
    int gang=0, kounter, i, kedua, pertama=0;
    cout<<"Masukan Kalimat = ";
    cin.getline(kopi, 100);
    int angka=strlen(kopi)+1;
    for(kounter=0; kounter<angka; kounter++)
    {
            if(kopi[kounter]==' ' || kounter==angka-1){
                gang++;
                kedua=kounter;
                int x=0;
                for(i=pertama; i<kedua; i++){
                    if(gang%2==0){
                        cout<<kopi[kedua-1-x];
                    }
                    else{
                        cout<<kopi[pertama+x];
                    }
                    x++;
                    if(i==kedua-1){
                        pertama=kounter+1;
                        cout<<" ";
                    }
                }
            }
    }
}
