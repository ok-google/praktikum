#include <iostream>
#include <cstring>

using namespace std;

void imam1()
{
    char input[100];
    cout<<"Masukan Kata = ";
    cin.getline(input, 100);
    cout<<"output ";
    for(int kounter=0; input[kounter]!='\0'; kounter++){
        if(input[kounter]==' '){
            cout<<int(input[kounter]-32)<<" ";
        }
        else if(input[kounter]>='a' && input[kounter]<='z'){
            cout<<int(input[kounter]-96)<<" ";
        }
        else{
            cout<<int(input[kounter]-64)<<" ";
        }
    }
    cout<<"\nBalik Kata = "<<strrev(input)<<endl;
    int vk=0, konsonan=0, gang=0;
    for(int kounter=0; input[kounter]!='\0'; kounter++){
        if(input[kounter]=='A' || input[kounter]=='I' || input[kounter]=='U' || input[kounter]=='E' || input[kounter]=='O' ||
           input[kounter]=='a' || input[kounter]=='i' || input[kounter]=='u' || input[kounter]=='e' || input[kounter]=='o'){
            vk++;
        }
        else if(input[kounter]==' '){
            gang++;
        }
        else{
            konsonan++;
        }
    }
    cout<<"Jumlah Vokal = "<<vk<<endl;
    cout<<"Jumlah Konsonan = "<<konsonan<<endl;
}
