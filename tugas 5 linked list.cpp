#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

struct node{
    string mhs;
    int data;
    node* next;
};

node *pala;
int kosong();
void cetak();
void muncul();
void hapus();


void kepala()
{
    pala = NULL;
}

int kosong()
{
    return (pala == NULL) ? 1:0;
}

void input()
{
      node* baru;
      node* ada;
      for(int i=1;i<5;i++) {
      baru = new node;
      cout<<"Masukan Nama Mahasiswa ke-"<<i<<" : ";
      cin>>baru->mhs;
      cout<<"Masukan NIM Mahasiswa ke-"<<i<<"  : ";
      cin>>baru->data;
      cout<<"\n";
      baru->next = NULL;
      if(pala == NULL) {
        pala = baru;
        pala->next = NULL;
      } else {
        ada = pala;
        while(ada->next != NULL) {
            ada = ada->next;
        }
        ada->next = baru;
      }
    }
}

void awal()
{
      node* absen;
      absen = pala;
      if(pala == NULL)
            cout<<"\nkosong\n";
      else
      {
            cout<<"  DATA MAHASISWA\n";
            cout<<"NAMA \t       NIM\n";
            while(absen!=NULL)
            {
                  cout<<absen->mhs<<"\t\t"<<absen->data<<"\n";
                  absen = absen->next;
            }
            cout<<endl;
      }
}

void muncul()
{
    node* ada;
    ada = pala;
    if(kosong()== NULL)
    {
        cout<<"  DATA MAHASISWA\n";
        cout<<"NAMA \t       NIM\n";
        while(ada!=NULL)
        {
            cout<<ada->mhs<<"\t\t"<<ada->data<<"\n";
            ada=ada->next;
        }
        cout<<"\n";
    }
    else
        cout<<"Masih Kosong\n";
}

void hapus()
{
    node* ngapus;
    node* ada;
    string d;
    if(pala !=NULL)
    {
        if(pala->next!=NULL)
        {
            ada=pala;
            while(ada->next->next!=NULL)
            {
                ada = ada->next;
            }
            ngapus = ada->next;
            d = ngapus->mhs;
            ada->next = NULL;
            delete ngapus;
        }
        else
        {
            d = pala->mhs;
            pala = NULL;
        }
        cout<<d<<" terhapus\n";
    }
    else
        cout<<"Masih kosong\n";
}

int main()
{
    cout<<"\tPROGRAM SENARAI BERANTAI\n\n\n";
    kepala();

    //entry data
    input();

    //data awal
    awal();

    //hapus data
    for(int i=1;i<=1;i++)
    {
        hapus();
    }
    cout<<"\ntampilkan list :\n\n";
    muncul();
    getch();
    return 0;
}
