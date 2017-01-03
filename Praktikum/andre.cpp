#include <iostream>

using namespace std;

void andre()
{
    int bulan[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month, tahun;
    cout<<"Masukan Bulan = ";
    cin>>month;
    cout<<"Masukan Tahun = ";
    cin>>tahun;
    if(tahun%4==0){
        bulan[1]=29;
    }
    cout<<"Jumlah Hari pada Bulan "<<month<<" tahun "<<tahun<<" adalah = "<<bulan[month-1];
}
