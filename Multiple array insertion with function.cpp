#include<iostream>
using namespace std;
void InsertionAtBeginning(int a[],int &n)

{
    int value,i;
    cout<<"Enter a value:";
    cin>>value;

    for(i=n-1; i>=0; i--)
    {
        a[i+1]=a[i];
    }
    a[0]=value;

n++;
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

}
void InsertionAtEnding(int a[],int &n)

{
    cout<<endl;
    int value,i;
    cout<<"Enter a value:";
    cin>>value;

    a[n]=value;
    n++;
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

}

void UserGivenPosition(int a[],int &n)
{
    cout<<endl;
    int pos,i;
    cout<<"Enter a position:";
    cin>>pos;
    if(pos<1||pos>n+1)
    {
        cout<<"Invalid";
    }

    else
    {
        int value;
        cout<<"Enter a value:";
        cin>>value;
        int index=pos-1;
        for(i=n-1; i>=index; i--)
        {
            a[i+1]=a[i];
        }
        a[index]=value;
        n++;

        for(i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
    }
}

int main()

{
    int n,i;
    cout<<"Enter a size:";
    cin>>n;
    int a[n+1];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    InsertionAtBeginning(a,n);
    InsertionAtEnding(a,n);
    UserGivenPosition(a,n);
    cout<<endl;
    cout<<"Final Arry:";
    for(i=0; i<n; i++)
        cout<<a[i]<<" ";
}

