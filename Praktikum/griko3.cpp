#include <iostream>
#include <cstring>

using namespace std;

void griko3()
{
    char input[100];
    int kounter, angka, i, n;
    cout<<"Masukan Angka = ";
    cin.getline(input, 100);
    angka=strlen(input);
    for(kounter=0; input[kounter]!='\0'; kounter++)
    {
        if(input[kounter]!=' ')
        {
            if(input[kounter+1]>='0' && input[kounter+1]<='9')
            {
                (input[kounter]=='1' ? n=9 : n=18);
                input[kounter]=char (input[kounter]+input[kounter+1]+n);
                input[kounter+1]=' ';
                for(i=kounter; i<=angka; i++)
                {
                    input[i+1]=input[i+2];
                }
            }
            else
            {
                input[kounter]=char(input[kounter]+48);
            }
        }
    }
    cout<<input;
}
