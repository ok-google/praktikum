#include <iostream>

using namespace std;

void modul2()
{
    int kolom;
    int baris;
    int deret;

    cout<<"Masukan nilai deret = ";
    cin>>deret;
    baris=0;
    while(baris<=deret){
        kolom=0;
        do{
            cout<<(((baris!=0)&&(kolom!=0)) ? baris*kolom : ((kolom<=baris) ? baris : kolom))<<"\t";
            kolom++;
        }while(kolom<=deret);
        cout<<endl;
        baris++;
    }
}

/*if((baris!=0)&&(kolom!=0)){
                cout<<baris*kolom<<"\t";
            }
            else{
                if(kolom<=baris){
                    cout<<baris<<"\t";
                }
                else{
                    cout<<kolom<<"\t";
                }
            }*/
