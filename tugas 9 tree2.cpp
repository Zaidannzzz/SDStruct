#include<iostream>

using namespace std;

int main()
{
    int hasil, i;
    string kalimat;
    char ganti, dicari;
    cout<<"SEARCH\n";
    cout<<"Masukan sebuah kalimat = ";
    cin>>kalimat;
    cout<<"\n> Masukan karakter yang dicari = ";
    cin>>dicari;
    cout<<"\n> Karakter pengganti = ";
    cin>>ganti;
    hasil = kalimat.length();
    for(i=0;i<hasil;i++)
    {
        if(kalimat[i]==dicari)
        {
            kalimat[i]=ganti;
        }
    }
    cout<<"\nHasil replace adalah sebagai berikut = "<<kalimat<<endl;
    return 0;
}


