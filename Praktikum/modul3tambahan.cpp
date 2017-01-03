#include <iostream>
#include <cstring>
using namespace std;

void modul3tambahan()
{
    char kata[100];
    cout<<"Masukan kata = ";
    cin.getline(kata, 100);
    for(int baris=0; baris<strlen(kata); baris++){
        for(int kolom=0; kolom<strlen(kata); kolom++){
            if(kolom<=strlen(kata)-baris-1){
                cout<<char(kata[kolom]+3);
            }
            }
            cout<<endl;
        }

}
