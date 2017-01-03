#include <iostream>
#include <cstdlib>

using namespace std;

void fandi2()
{
    int banyakMatriks=0, jumbaris, jumkolom, kounter;
    do{
            system("CLS");
    if(banyakMatriks>4){
        cout<<"Banyaknya Matriks Maksimal 4"<<endl;
    }
        cout<<"Masukan Banyaknya Matriks = ";
        cin>>banyakMatriks;
    }while(banyakMatriks>4);

    cout<<"Masukan banyak baris = ";
    cin>>jumbaris;
    cout<<"Masukan banyak kolom = ";
    cin>>jumkolom;
    int matriks[jumbaris][jumkolom], matriks1[jumbaris][jumkolom], matriks2[jumbaris][jumkolom], matriks3[jumbaris][jumkolom];
    int hasil[jumbaris][jumkolom];
    for(kounter=1; kounter<=banyakMatriks; kounter++){
    cout<<"\nMatriks "<<kounter<<" = \n";
    for(int baris=0; baris<jumbaris; baris++){
        for(int kolom=0; kolom<jumkolom; kolom++){
            switch(kounter){
            case 1 :
                matriks[baris][kolom]=rand()%10;
                cout<<matriks[baris][kolom]<<"\t";
                break;
            case 2 :
                matriks1[baris][kolom]=rand()%10;
                cout<<matriks1[baris][kolom]<<"\t";
                break;
            case 3 :
                matriks2[baris][kolom]=rand()%10;
                cout<<matriks2[baris][kolom]<<"\t";
                break;
            case 4 :
                matriks3[baris][kolom]=rand()%10;
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
