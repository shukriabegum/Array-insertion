#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter a size: ";
    cin>>n;
    int a[n+1];
    cout<<"Enter array elements:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int value;
    cout<<"Enter a value:";
    cin>>value;
    int index=0;
    cout<<"Enter right shifting:"<<endl;
    for(i=n-1;i>=index;i--)
    {
        a[i+1]=a[i];
        for(int j=0;j<=n;j++)
        {
            cout<<a[j]<<" ";
        }
        cout<<endl;
    }
     a[index]=value;

    cout<<"After insertion:";


    for(i=0;i<n+1;i++)
    {
        cout<<a[i]<<" ";
    }

getch();
}

