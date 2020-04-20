#include<conio.h>
#include<iostream>
using namespace std;

int main()
{
    int Ar[100];
    int tar, i, angka, waw=0;

    cout<<"PENCARIAN ANGKA\n";
    cout<<"Masukan Banyak Data : ";
    cin>>angka;
    for(int i=1; i<=angka; i++)
    {
        cout<<"Masukan angka ke-"<<i<<" = ";
        cin>>Ar[i];
    }
    cout<<"\n\nmasukan data yang akan dicari : ";
    cin>>tar;


    for(i=0;i<=angka;i++){
        if(Ar[i] == tar)
        {
            cout<<" Data ditemukan, indeks ke-"<<i<<endl;
        }
    }
    getch;
}
