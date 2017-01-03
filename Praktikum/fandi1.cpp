#include <iostream>
#include <cstring>
using namespace std;

void fandi1()
{
    char input[100];
    cout<<"Masukan kalimat = ";
    cin.getline(input, 100);
    int angka=strlen(input);
    cout<<input<<" ";
    for(int kounter=0; kounter<angka-1; kounter++){
    input[angka]=input[0];
    input[angka+1]='\0';
    for(int i=0; i<angka; i++){
        input[i]=input[i+1];
        if(i+1==angka){
        input[angka]='\0';}
    }
    cout<<input<<" ";
    }
}
