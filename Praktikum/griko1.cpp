#include <iostream>

using namespace std;

void griko1()
{
    char input[100], kopi[100], kopi2[100];
    int kounter;
    int vokal=0;
    int konsonan=0;
    int besar=0;
    int kecil=0;
    int gang=0, offset, gantine, banyak=1, angka, i, pluss=0, pertama=0, kedua;
    cout<<"Input User       = ";
    cin.getline(input, 100);
    for(kounter=0; input[kounter]!='\0'; kounter++)
    {
        if(input[kounter]>='A' && input[kounter]<='z' || input[kounter]==' ')
        {
            banyak++;
        }
    }
    angka=banyak;
    for(kounter=0; kounter<angka; kounter++)
    {
        kopi[kounter]=input[kounter];
    }
    cout<<endl;
    cout<<"Input Text       = "<<input<<endl;
    cout<<"Reserved         =";
    for(kounter=angka-1; kounter>=0; kounter--)
    {
        cout<<kopi[kounter];
    }
    cout<<endl;
    for(kounter=0; kounter<angka; kounter++)
    {
        kopi[kounter]=input[kounter];
    }
    cout<<"Reserved         = ";
    for(kounter=0; kounter<angka; kounter++)
    {
            if(kopi[kounter]==' ' || kounter==angka-1){
                kedua=kounter;
                int x=0;
                for(i=pertama; i<kedua; i++){
                    cout<<kopi[kedua-1-x];
                    x++;
                    if(i==kedua-1){
                        pertama=kounter+1;
                        cout<<" ";
                    }
                }
            }
    }
    cout<<endl;
    for(kounter=0; kounter<angka; kounter++)
    {
        kopi[kounter]=input[kounter];
    }
    cout<<endl;
    for(kounter=0; kounter<angka; kounter++)
    {
        if(kopi[kounter]>='a' && kopi[kounter]<='z')
        {
            kopi[kounter]=char(kopi[kounter]-32);
        }
    }
    cout<<endl;
    cout<<"All Uppercase    = "<<kopi<<endl;
    for(kounter=0; kounter<angka; kounter++)
    {
        if(kopi[kounter]>='A' && kopi[kounter]<='Z')
        {
            kopi[kounter]=char(kopi[kounter]+32);
        }
    }
    cout<<"All Lowercase    = "<<kopi<<endl;
        for(kounter=0; kounter<angka; kounter++)
    {
        kopi[kounter]=input[kounter];
        kopi2[kounter]=input[kounter];
    }
    for(kounter=0; kounter<angka; kounter++)
    {
        if(kopi[kounter]>='A' && kopi[kounter]<='Z')
        {
            kopi[kounter]=' ';
        }
        else if(kopi2[kounter]>='a' && kopi2[kounter]<='z')
        {
            kopi2[kounter]=' ';
        }
    }
    cout<<endl;
    cout<<"Hide Uppercase   = "<<kopi<<endl;
    cout<<"Hide Lowercase   = "<<kopi2<<endl<<endl;
    for(kounter=0; kounter<angka; kounter++)
    {
        if(input[kounter]>='A' && input[kounter]<='Z')
        {
            besar++;
        }
        else if(input[kounter]>='a' && input[kounter]<='z')
        {
            kecil++;
        }
    }
    cout<<endl;
    cout<<"Total Uppercase  = "<<besar<<endl;
    cout<<"Total LowerCase  = "<<kecil<<endl;
    for(kounter=0; kounter<angka; kounter++)
    {
        kopi[kounter]=input[kounter];
        kopi2[kounter]=input[kounter];
    }
    for(kounter=0; input[kounter]!='\0'; kounter++)
    {
        if(input[kounter]=='a' || input[kounter]=='i' || input[kounter]=='u' ||
                input[kounter]=='e' || input[kounter]=='o' || input[kounter]=='A' ||
                input[kounter]=='I' || input[kounter]=='U' || input[kounter]=='E' || input[kounter]=='O')
        {
            vokal++;
            kopi[kounter]=' ';//Menghilang Huruf Vokal;
        }
        else if(input[kounter]==' ')
        {
            gang++;
        }
        else
        {
            konsonan++;
            kopi2[kounter]=' ';//Menghilangkan Huruf Bukan Vokal
        }
    }
    cout<<endl;
    cout<<"Vocals           = "<<vokal<<endl;
    cout<<"Consonant        = "<<konsonan<<endl;
    cout<<"Spaces           = "<<gang<<endl;
    cout<<endl;
    cout<<"Hide Vocals      = "<<kopi<<endl;
    cout<<"Hide Consonan    = "<<kopi2<<endl<<endl;
    gang=1;
    cout<<"Word #1          = ";
    for(kounter=0; kounter<angka; kounter++)
    {
        if(input[kounter]==' ')
        {
            gang++;
            cout<<endl;
    cout<<"Word #"<<gang<<"          = ";
        }
        else
        {
            cout<<input[kounter];
        }
    }
    cout<<endl<<endl;
    cout<<"Input Offset     = ";
    cin>>offset;
    for(kounter=0; input[kounter]!='\0'; kounter++)
    {
        if(input[kounter]!=' ')
        {
            gantine=int(input[kounter])+offset;//Merubah ke kode ASCII
            if(input[kounter]>='a' && input[kounter]<='z'){
                if(gantine>122){
                gantine=gantine-26;
            }
                else if(gantine<97){
                    gantine=gantine+26;
                }
            }
            else if(input[kounter]>='A' && input[kounter]<='Z'){
            if(gantine>90)
            {
                gantine=gantine-26;
            }
            else if(gantine<65)
            {
                gantine=gantine+26;
            }
        }
            input[kounter]=char (gantine);//Merubah ASCII ke Karakter
        }
    }
    cout<<"Offset Text      = "<<input;
    cout<<endl;
}
