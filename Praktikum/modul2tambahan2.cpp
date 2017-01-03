#include <iostream>

using namespace std;

void modul2tambahan2()
{
    int baris;
    int kolom;
    int banyak;
    cout<<"Masukan Panjang = ";
    cin>>banyak;
    for(baris=1; baris<=banyak*2; baris++){
        for(kolom=1; kolom<=banyak; kolom++){
            if((baris<=banyak)&&(baris>=kolom)){
                    cout<<"*";
            }
            else if(banyak*2-baris+1<=kolom){
                    cout<<"*";
                }
            else{
                    cout<<" ";
                }
        }
        cout<<endl;
    }
}
