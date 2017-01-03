#include <iostream>
#include <stdlib.h>
using namespace std;

void modul3()
{
    int banyakMatriks, jumbaris, jumkolom, kounter;
    do{
            system("CLS");
        cout<<"Masukan Banyaknya Matriks = ";
        cin>>banyakMatriks;
        if(banyakMatriks>4){
        cout<<"Banyaknya Matriks Maksimal 4"<<endl;
    }
    }while(banyakMatriks>4);

    cout<<"Masukan banyak baris = ";
    cin>>jumbaris;
    cout<<"Masukan banyak kolom = ";
    cin>>jumkolom;
    int matriks[jumbaris][jumkolom], matriks1[jumbaris][jumkolom], matriks2[jumbaris][jumkolom], matriks3[jumbaris][jumkolom];
    int hasil[jumbaris][jumkolom];
    for(kounter=1; kounter<=banyakMatriks; kounter++){
    cout<<"\nMasukan Nilai Matriks "<<kounter<<" = \n";
    for(int baris=0; baris<jumbaris; baris++){
        for(int kolom=0; kolom<jumkolom; kolom++){
            cout<<"Element ke-"<<baris+1<<"."<<kolom+1<<" = ";
            switch(kounter){
            case 1 :
                cin>>matriks[baris][kolom];
                break;
            case 2 :
                cin>>matriks1[baris][kolom];
                break;
            case 3 :
                cin>>matriks2[baris][kolom];
                break;
            case 4 :
                cin>>matriks3[baris][kolom];
                break;
            }
        }
    }
    cout<<endl;
    }
    for(kounter=1; kounter<=banyakMatriks; kounter++){
    cout<<"\nMatriks "<<kounter<<" = \n";
    for(int baris=0; baris<jumbaris; baris++){
        for(int kolom=0; kolom<jumkolom; kolom++){
            switch(kounter){
            case 1 :
                cout<<matriks[baris][kolom]<<"\t";
                break;
            case 2 :
                cout<<matriks1[baris][kolom]<<"\t";
                break;
            case 3 :
                cout<<matriks2[baris][kolom]<<"\t";
                break;
            case 4 :
                cout<<matriks3[baris][kolom]<<"\t";
                break;
            }
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    }
    cout<<"\nPenjumlahan Matriks\n";
    cout<<"-------------------\n";
    for(int baris=0; baris<jumbaris; baris++){
        for(int kolom=0; kolom<jumkolom; kolom++){
            switch(banyakMatriks){
            case 1 :
                hasil[baris][kolom]=matriks[baris][kolom];
                break;
            case 2 :
                hasil[baris][kolom]=matriks[baris][kolom]+matriks1[baris][kolom];
                break;
            case 3 :
                hasil[baris][kolom]=matriks[baris][kolom]+matriks1[baris][kolom]+matriks2[baris][kolom];
                break;
            case 4 :
                hasil[baris][kolom]=matriks[baris][kolom]+matriks1[baris][kolom]+matriks2[baris][kolom]+matriks3[baris][kolom];
                break;
            }
            cout<<hasil[baris][kolom]<<"\t";
        }
        cout<<endl;
    }
    cout<<"\nPengurangan Matriks\n";
    cout<<"-------------------\n";
    for(int baris=0; baris<jumbaris; baris++){
        for(int kolom=0; kolom<jumkolom; kolom++){
            switch(banyakMatriks){
            case 1 :
                hasil[baris][kolom]=matriks[baris][kolom];
                break;
            case 2 :
                hasil[baris][kolom]=matriks[baris][kolom]-matriks1[baris][kolom];
                break;
            case 3 :
                hasil[baris][kolom]=matriks[baris][kolom]-matriks1[baris][kolom]-matriks2[baris][kolom];
                break;
            case 4 :
                hasil[baris][kolom]=matriks[baris][kolom]-matriks1[baris][kolom]-matriks2[baris][kolom]-matriks3[baris][kolom];
                break;
            }
            cout<<hasil[baris][kolom]<<"\t";
        }
        cout<<endl;
    }
    cout<<"\nPerkalian Matriks\n";
    cout<<"-----------------\n";
    for(int baris=0; baris<jumbaris; baris++){
        for(int kolom=0; kolom<jumkolom; kolom++){
            switch(banyakMatriks){
            case 1 :
                hasil[baris][kolom]=matriks[baris][kolom];
                break;
            case 2 :
                hasil[baris][kolom]=matriks[baris][kolom]*matriks1[baris][kolom];
                break;
            case 3 :
                hasil[baris][kolom]=matriks[baris][kolom]*matriks1[baris][kolom]*matriks2[baris][kolom];
                break;
            case 4 :
                hasil[baris][kolom]=matriks[baris][kolom]*matriks1[baris][kolom]*matriks2[baris][kolom]*matriks3[baris][kolom];
                break;
            }
            cout<<hasil[baris][kolom]<<"\t";
        }
        cout<<endl;
    }
}
