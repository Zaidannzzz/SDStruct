#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

int main()
{
    char kata[35], palindrome;
    int inputkata, i, balik;

    cout<<"Aplikasi Stack untuk membalik kalimat\n";
    cout<<"=====================================\n";

    cout<<"Masukan kalimat\t\t       : ";
    cin>>kata;
    inputkata=strlen(kata); //strlen=menghitung jumlah kata
    cout<<"Jumlah Huruf\t\t       : "<<strlen(kata)<<endl;
    cout<<"Kalimat Asli\t\t       : "<<kata<<endl;
    cout<<"Kalimat setelah dibalik adalah : ";
    for(i=inputkata;i>=1;i--)
    {
        char stack= kata[i-1];
        cout<<stack;
    }
    balik = inputkata-1;
    for(int i=0; i<inputkata; i++)
    {
        if((kata[i])!=(kata[balik]))
        {
            palindrome = true;
            break;
        }
        balik--;
    }

    if(palindrome)
    {
        cout<<"\n\nBukan Palindrome"<<endl;
    }else
    {
        cout<<"\n\nPalindrome"<<endl;
    }
    getch();
}
