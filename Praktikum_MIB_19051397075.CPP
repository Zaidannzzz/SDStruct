#include<iostream>
#include<string>
using namespace std;

struct data_pembeli
{
    string nama;
    char beli[5];
    string status;
};

struct
{
    struct data_pembeli orang[5];

}mau;

struct data_barang
{
    string nama;
    float harga;
};

struct item
{
    struct data_barang unit[5];
}pengen;

int main()
{
    int jumlah, koli, kobar, total=0, duit, kembali;
    float diskon=0, semua=0;

    mau.orang[1].nama="Diana";
    mau.orang[2].nama="Rina";
    mau.orang[3].nama="Lina";
    mau.orang[4].nama="Doni";
    mau.orang[5].nama="Dodi";

    mau.orang[1].status="Member";
    mau.orang[2].status="Member";
    mau.orang[3].status="Belom Member";
    mau.orang[4].status="Belom Member";
    mau.orang[5].status="Member";

    pengen.unit[1].nama="Pensil";
    pengen.unit[2].nama="Buku tulis";
    pengen.unit[3].nama="Penghapus";
    pengen.unit[4].nama="Penggaris";
    pengen.unit[5].nama="Ballpoint";

    pengen.unit[1].harga=2000;
    pengen.unit[2].harga=3500;
    pengen.unit[3].harga=1000;
    pengen.unit[4].harga=1500;
    pengen.unit[5].harga=2500;

    cout<<"TOKO INDO APRIL"<<endl;
    cout<<"Jl. DI Panjaitan 128 Purwokerto\n"<<endl;


    cout<<"Kode pembeli     : P00"; cin>>koli;
    switch(koli)
    {
        case 1:
        {
            cout<<"Nama pembeli     : "<<mau.orang[1].nama<<endl;
            cout<<"Status pembeli   : "<<mau.orang[1].status<<endl;
            break;
        }
        case 2:
        {
            cout<<"Nama pembeli     : "<<mau.orang[2].nama<<endl;
            cout<<"Status pembeli   : "<<mau.orang[2].status<<endl;
            break;
        }
        case 3:
        {
            cout<<"Nama pembeli     : "<<mau.orang[3].nama<<endl;
            cout<<"Status pembeli   : "<<mau.orang[3].status<<endl;
            break;
        }
        case 4:
        {
            cout<<"Nama pembeli     : "<<mau.orang[4].nama<<endl;
            cout<<"Status pembeli   : "<<mau.orang[4].status<<endl;
            break;
        }
        case 5:
        {
            cout<<"Nama pembeli     : "<<mau.orang[5].nama<<endl;
            cout<<"Status pembeli   : "<<mau.orang[5].status<<endl;
            break;
        }
    }
    cout<<endl;


    cout<<"Kode barang      : BRG00"; cin>>kobar;
    switch(kobar)
    {
        case 1:
        {
            cout<<"Nama barang      : "<<pengen.unit[1].nama<<endl;
            cout<<"Harga barang     : "<<pengen.unit[1].harga<<endl;
            cout<<"Jumlah barang    : ";
            cin>>jumlah;
            total=pengen.unit[1].harga*jumlah;
            diskon=0.1*total;
            semua=total-diskon;
            break;
        }
        case 2:
        {
            cout<<"Nama barang      : "<<pengen.unit[2].nama<<endl;
            cout<<"Harga barang     : "<<pengen.unit[2].harga<<endl;
            cout<<"Jumlah barang    : ";
            cin>>jumlah;
            total=pengen.unit[2].harga*jumlah;
            diskon=0.1*total;
            semua=total-diskon;
            break;
        }
        case 3:
        {
            cout<<"Nama barang      : "<<pengen.unit[3].nama<<endl;
            cout<<"Harga barang     : "<<pengen.unit[3].harga<<endl;
            cout<<"Jumlah barang    : ";
            cin>>jumlah;
            semua=pengen.unit[3].harga*jumlah;
            break;
        }
        case 4:
        {
            cout<<"Nama barang      : "<<pengen.unit[4].nama<<endl;
            cout<<"Harga barang     : "<<pengen.unit[4].harga<<endl;
            cout<<"Jumlah barang    : ";
            cin>>jumlah;
            semua=pengen.unit[4].harga*jumlah;
            break;
        }
        case 5:
        {
            cout<<"Nama barang      : "<<pengen.unit[5].nama<<endl;
            cout<<"Harga barang     : "<<pengen.unit[5].harga<<endl;
            cout<<"Jumlah barang    : ";
            cin>>jumlah;
            total=pengen.unit[5].harga*jumlah;
            diskon=0.1*total;
            semua=total-diskon;
            break;
        }
    }

    if(jumlah>3)
    {
        semua=semua-300;
    }
    cout<<"\n";


    cout<<"Subtotal     : Rp"<<total<<endl;
    cout<<"Diskon       : Rp"<<diskon<<endl;
    cout<<"Total        : Rp"<<semua<<endl;
    cout<<"Dibayarkan   : Rp";
    cin>>duit;
    kembali=duit-semua;
    cout<<"\n";
    cout<<"Kembali      : Rp"<<kembali;
    return 0;
}
