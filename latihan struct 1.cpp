#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

struct data_mahasiswa
{
    long int nim;
    char nama[100];
    char prodi[100];
    char kelas;
};

data_mahasiswa mahasiswa1, mahasiswa2;

int main()
{
    cout<<" Masukan data mahasiswa\n";
    cout<<" ======================\n"<<endl;
    cout<<" Data Mahasiswa Pertama\n";
    cout<<"-----------------------\n";
    cout<<" NIM     : "; cin>>mahasiswa1.nim;
    cout<<" Nama    : "; fflush (stdin); gets (mahasiswa1.nama);
    cout<<" Prodi   : "; fflush (stdin); gets (mahasiswa1.prodi);
    cout<<" Kelas   : "; cin>>mahasiswa1.kelas;
    cout<<"\n\n";
    cout<<" Data Mahasiswa Kedua\n";
    cout<<"---------------------\n";
    cout<<" NIM     : "; cin>>mahasiswa2.nim;
    cout<<" Nama    : "; fflush (stdin); gets (mahasiswa2.nama);
    cout<<" Prodi   : "; fflush (stdin); gets (mahasiswa2.prodi);
    cout<<" Kelas   : "; cin>>mahasiswa2.kelas;
    cout<<"\n\n";

    system("cls");


    cout<<" Tampilan data mahasiswa\n";
    cout<<" ======================\n"<<endl;
    cout<<" Data Mahasiswa Pertama\n";
    cout<<"-----------------------\n";
    cout<<" NIM     : "<<mahasiswa1.nim<<endl;
    cout<<" Nama    : "<<mahasiswa1.nama<<endl;
    cout<<" Prodi   : "<<mahasiswa1.prodi<<endl;
    cout<<" Kelas   : "<<mahasiswa1.kelas<<endl;
    cout<<"\n\n";
    cout<<" Data Mahasiswa Kedua\n";
    cout<<"----------------------\n";
    cout<<" NIM     : "<<mahasiswa2.nim<<endl;
    cout<<" Nama    : "<<mahasiswa2.nama<<endl;
    cout<<" Prodi   : "<<mahasiswa2.prodi<<endl;
    cout<<" Kelas   : "<<mahasiswa2.kelas<<endl;
    cout<<"\n\n";
    getch();
}
