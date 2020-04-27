#include <iostream>
#include <conio.h>
using namespace std;

main()
{
    char a[100], t, j ,k;
    int i, x;

    cout<<"Insertion Sort\n";
    cout<<"Masukan banyak bilangan = ";
    cin>>x;
    for(i=1;i<=x;i++)
    {
        cout<<"\n Bilangan ke-"<<i<<" = ";
        cin>>a[i];
    }
    cout<<"\n\n data sebelum diurutkan : ";
    for(i=1;i<=x;i++)
    {
        cout<<" "<<a[i];
    }
    cout<<endl;
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(a[j]>a[i])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    cout<<"\n\n data setelah diurutkan secara descending : ";
    for(i=1;i<=x;i++)
    {
        cout<<" "<<a[i];
    }
    getch();
}
