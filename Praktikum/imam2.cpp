#include <iostream>
#include <cstring>
using namespace std;

void imam2()
{
    char input[100], ganti2[10], ubah[10];
    int tambah=0;
    cout<<"Masukan Kata = ";
    cin.getline(input, 100);
    cout<<"Masukan Kata yang diganti (1 huruf) = ";
    cin.getline(ubah, 10);
    cout<<"Masukan Kata pengganti (2 huruf)= ";
    cin.getline(ganti2, 100);
    int angka=strlen(input);
    for(int kounter=0; kounter<angka+tambah; kounter++){
        if(input[kounter]==ubah[0]){
            tambah++;
            for(int i=angka+tambah-1; i>=kounter+1; i--){
                input[i+1]=input[i];
            }
            if(kounter==angka+tambah-1){
                input[kounter]=ganti2[0];
                input[kounter+1]=ganti2[1];
            }
            input[kounter]=ganti2[0];
            input[kounter+1]=ganti2[1];
        }
    }
    input[angka+tambah]='\0';
    cout<<input;
}
