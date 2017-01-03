#include <iostream>

using namespace std;

void modul2tambahan1()
{
    int angka;
    int baris;
    int kolom;
    int m, x;
    cout<<"Masukan angka = ";
    cin>>angka;
    x=m=0;
    for(baris=1; baris<=angka*2; baris++){
        for(kolom=1; kolom<=angka*2; kolom++){
            if((kolom<=angka+m)&&(kolom>=angka-m)){
                cout<<(1+x)%10<<ends;
                ((kolom<angka)? x++ : x--);
            }
            else{
                cout<<" "<<ends;
            }
        }
        cout<<endl;
        x=0;
        ((baris<angka)? m++ : m--);
    }
}
