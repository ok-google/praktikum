#include <iostream>
#include <stdlib.h>
#include "modul1.cpp"
#include "modul2.cpp"
#include "modul2tambahan1.cpp"
#include "modul2tambahan2.cpp"
#include "modul3.cpp"
#include "modul3tambahan.cpp"
#include "amalia.cpp"
#include "andre.cpp"
#include "fandi1.cpp"
#include "fandi2.cpp"
#include "griko1.cpp"
#include "griko2.cpp"
#include "griko3.cpp"
#include "imam1.cpp"
#include "imam2.cpp"
#include "taufan.cpp"
#include "modul4.cpp"
#include "sincostan.cpp"

using namespace std;

int main()
{
    int pilih;
    char coba;
    menu:
    do{
    system("CLS");
    cout<<"Menu Pilihan \n";
    cout<<"1. Modul 1\n";
    cout<<"2. Modul 2\n";
    cout<<"3. Modul 3\n";
    cout<<"4. Modul 4\n";
    cout<<"5. Exit \n";
    cout<<"Masukan Pilihan anda = ";
    cin>>pilih;
    switch(pilih){
    case 1:
        system("CLS");
        modul1();
        break;
    case 2:
        do{
        system("CLS");
        cout<<"1. Modul 2\n";
        cout<<"2. Tugas Tambahan Modul 2 (1)\n";
        cout<<"3. Tugas Tambahan Modul 2 (1)\n";
        cout<<"4. Kembali ke Menu Utama\n";
        cout<<"Masukan pilihan anda = ";
        cin>>pilih;
        switch(pilih){
        case 1:
            system("CLS");
            cout<<"Modul 2\n";
            modul2();
            break;
        case 2:
            system("CLS");
            cout<<"Tugas Tambahan Modul 2 (1)\n";
            modul2tambahan1();
            break;
        case 3:
            system("CLS");
            cout<<"Tugas Tambahan Modul 2 (2)\n";
            modul2tambahan2();
            break;
        case 4:
            goto menu;
        default:
            break;
            }
        cout<<endl;
        cout<<"Apakah Anda ingin Mencoba pilihan Modul 2 yang lain [y/n] = ";
        cin>>coba;}while(coba=='y');
        break;
    case 3:
        do{
        system("CLS");
        cout<<"1. Modul 3\n";
        cout<<"2. Tugas Tambahan Modul 3\n";
        cout<<"3. Tugas Tambahan Mas Griko\n";
        cout<<"4. Tugas Tambahan Mas Fandi\n";
        cout<<"5. Tugas Tambahan Mas Imam\n";
        cout<<"6. Tugas Tambahan Mas Taufan\n";
        cout<<"7. Tugas Tambahan Mas Andre\n";
        cout<<"8. Tugas Tambahan Mbak Amalia\n";
        cout<<"9. Kembali ke menu Utama\n";
        cout<<"Masukan pilihan anda = ";
        cin>>pilih;
        switch(pilih){
            case 1:
                system("CLS");
                cout<<"1. Modul 3\n";
                modul3();
                break;
            case 2:
                system("CLS");
                cout<<"Tugas Tambahan Modul 3\n";
                cin.ignore();
                modul3tambahan();
                break;
            case 3:
                do{
                system("CLS");
                cout<<"Tugas Tambahan Mas Griko\n";
                cout<<"1. Tugas 1\n";
                cout<<"2. Tugas 2\n";
                cout<<"3. Tugas 3\n";
                cout<<"Masukan Pilihan anda = ";
                cin>>pilih;
                switch(pilih){
                    case 1:
                        system("CLS");
                        cout<<"Tugas 1\n";
                        cin.ignore();
                        griko1();
                        break;
                    case 2:
                        system("CLS");
                        cout<<"Tugas 2\n";
                        cin.ignore();
                        griko2();
                        break;
                    case 3:
                        system("CLS");
                        cout<<"Tugas 3\n";
                        cin.ignore();
                        griko3();
                        break;
                    default:
                        goto menu;
                }
                cout<<endl<<endl;
                cout<<"Apakah Anda ingin Mencoba pilihan yang lain [y/n] = ";
                cin>>coba;}while(coba=='y');
                break;
            case 4:
                do{
                system("CLS");
                cout<<"Tugas Tambahan Mas Fandi\n";
                cout<<"1. Tugas 1\n";
                cout<<"2. Tugas 2\n";
                cout<<"Masukan Pilihan anda = ";
                cin>>pilih;
                switch(pilih){
                    case 1:
                        system("CLS");
                        cout<<"Tugas 1\n";
                        cin.ignore();
                        fandi1();
                        break;
                    case 2:
                        system("CLS");
                        cout<<"Tugas 2\n";
                        fandi2();
                        break;
                    default:
                        goto menu;
                }
                cout<<endl;
                cout<<"Apakah Anda ingin Mencoba pilihan yang lain [y/n] = ";
                cin>>coba;}while(coba=='y');
                break;
            case 5:
                do{
                system("CLS");
                cout<<"Tugas Tambahan Mas Imam\n";
                cout<<"1. Tugas 1\n";
                cout<<"2. Tugas 2\n";
                cout<<"Masukan Pilihan anda = ";
                cin>>pilih;
                switch(pilih){
                    case 1:
                        system("CLS");
                        cin.ignore();
                        cout<<"Tugas 1\n";
                        imam1();
                        break;
                    case 2:
                        system("CLS");
                        cout<<"Tugas 2\n";
                        cin.ignore();
                        imam2();
                        break;
                    default:
                        goto menu;
                }
                cout<<endl;
                cout<<"Apakah Anda ingin Mencoba pilihan yang lain [y/n] = ";
                cin>>coba;}while(coba=='y');
                break;
            case 6:
                system("CLS");
                cout<<"Tugas Tambahan Mas Taufan\n";
                cin.ignore();
                taufan();
                break;
            case 7:
                system("CLS");
                cout<<"Tugas Tambahan Mas Andre\n";
                andre();
                break;
            case 8:
                system("CLS");
                cout<<"Tugas Tambahan Mbak Amalia\n";
                cin.ignore();
                amalia();
                break;
            case 9:
                goto menu;
            default:
                goto menu;;
        }
        cout<<endl;
        cout<<"Apakah Anda ingin Mencoba pilihan Modul 3 yang lain [y/n] = ";
        cin>>coba;}while(coba=='y');
        break;
    case 4:
        do{
        system("CLS");
        cout<<"1. Modul 4\n";
        cout<<"2. Tugas Tambahan Modul 4\n";
        cout<<"3. Kembali\n";
        cout<<"Masukan pilihan anda = ";
        cin>>pilih;
        switch(pilih){
    case 1:
        system("CLS");
        cout<<"Modul 4\n";
        cin.ignore();
        modul4();
        break;
    case 2:
        system("CLS");
        cout<<"Tugas Tambahan Modul 4\n";
        cin.ignore();
        sincostan4();
        break;
    case 3:
        goto menu;
        break;
    default:
        goto menu;
        break;
        }
        cout<<endl;
        cout<<"Apakah Anda ingin Mencoba pilihan Modul 4 yang lain [y/n] = ";
        cin>>coba;}while(coba=='y');
        break;
    case 5:
        return 0;
    default:
        goto menu;
    }
    cout<<endl;
    cout<<"Apakah Anda ingin kembali ke menu utama [y/n] = ";
    cin>>coba;}while(coba=='y');
    system("CLS");
    cout<<endl<<endl<<endl<<endl;
    cout<<"======================================================\n";
    cout<<"                     Terima Kasih                     \n";
    cout<<"                    Rizki Setiawan                    \n";
    cout<<"                06 . 2016 . 1 . 06621                 \n";
    cout<<"======================================================\n";
    cout<<endl<<endl<<endl<<endl;
}
