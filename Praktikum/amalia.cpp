#include <iostream>
#include <cstring>
using namespace std;

void amalia()
{
    char input[100];
    int kounter, kedua, pertama=0, angka=1;
    cout<<"Masukan Kata = ";
    cin.getline(input, 100);
    cout<<"Huruf Depan = "<<input[0]<<endl;
    cout<<"Huruf Tengah= ";
    if(strlen(input)%2==0){
        cout<<"Kata yang di input genap";
    }
    else{
        cout<<input[strlen(input)/2+1];
    }
    cout<<endl;
    cout<<"Huruf Akhir = "<<input[strlen(input)-1];
}
