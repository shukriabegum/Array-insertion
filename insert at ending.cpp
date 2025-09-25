#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter a size:";
    cin>>n;
    int a[n+1];
    cout<<"Enter element:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int value;
    cout<<"Enter value:";
    cin>>value;

    a[n]=value;
    cout<<"After insertion:";
    for(i=0;i<n+1;i++)
    {
        cout<<a[i]<<" ";
    }
    getch();
}

