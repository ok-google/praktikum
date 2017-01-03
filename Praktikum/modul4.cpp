#include "rumus.h"

float r,t;
int pilih;

void input();
void menu();
void pilihan(int pilih);

void modul4()
{
    char lagi;
    do{
        system("CLS");
        input();
        do{
            system("CLS");
            cout<<"Jari-jari = "<<r<<endl;
            cout<<"Tinggi    = "<<t<<endl;
            menu();
            cout<<"\nMasukan Pilihan Anda = ";
            cin>>pilih;
            system("CLS");
            cout<<"Jari-jari = "<<r<<endl;
            cout<<"Tingii    = "<<t<<endl<<endl;
            pilihan(pilih);
            cout<<endl;
            cout<<"\nAnda Ingin mencoba pilihan lain [y/t] ?";
            cin>>lagi;
        }while(lagi=='y');
        cout<<"\nAnda Ingin input jari-jari dan tinggi lagi [y/t] ?";
        cin>>lagi;
    }while(lagi=='y');
}

void input(){
    cout<<"Masukan nilai jari-jari = ";
    cin>>r;
    cout<<"Masukan nilai Tinggi    = ";
    cin>>t;
}

void menu(){
    cout<<endl;
    cout<<"1. Keliling Lingkaran\n";
    cout<<"2. Luas Lingkaran\n";
    cout<<"3. Luas Permukaan Bola\n";
    cout<<"4. Volume Bola\n";
    cout<<"5. Luas Permukaan Tabung\n";
    cout<<"6. Luas Selimut Tabung\n";
    cout<<"7. Volume Tabung\n";
    cout<<endl;
}

void pilihan(int pilih){
    float hasil;
    switch(pilih){
    case 1:
        cout<<"Rumus = 2 * PHI * r "<<endl;
        hasil=keliling(r);
        cout<<"Keliling Lingkaran = "<<hasil;
        break;
    case 2:
        cout<<"Rumus = PHI * r * r "<<endl;
        hasil=luas(r);
        cout<<"Luas Lingkaran = "<<hasil;
        break;
    case 3:
        cout<<"Rumus = 4 * PHI * r *r "<<endl;
        hasil=permukaanbola(r);
        cout<<"Luas Permukaan Bola = "<<hasil;
        break;
    case 4:
        cout<<"Rumus = 4/3 * PHI * r * r * r "<<endl;
        hasil=volumebola(r);
        cout<<"Volume Bola = "<<hasil;
        break;
    case 5:
        cout<<"Rumus = (2 * PHI * r * r) + (2 * PHI * r * t)"<<endl;
        hasil=permukaantabung(r, t);
        cout<<"Luas Permukaan Tabung = "<<hasil;
        break;
    case 6:
        cout<<"Rumus = 2 * PHI * r * t "<<endl;
        hasil=selimuttabung(r, t);
        cout<<"Luas Selimut Tabung = "<<hasil;
        break;
    case 7:
        cout<<"Rumus = PHI * r * r * t "<<endl;
        hasil=volumetabung(r, t);
        cout<<"Volume Tabung = "<<hasil;
        break;
    default:
        cout<<"Pilihan Tidak tersedia\n";
        break;
    }
}
