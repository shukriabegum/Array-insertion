#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter a size:";
    cin>>n;
    int a[n+1];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int beginningValue;
    cout<<"Enter a beginning value:";
    cin>>beginningValue;
    for(i=n-1; i>=0; i--)
    {
        a[i+1]=a[i];
    }
    a[0]=beginningValue;
    

    int pos;
    cout<<"Enter position:";
    cin>>pos;
    while(pos<1||pos>n+1)
    {
        cout<<"Invalid";
        cout<<"Enter position:";
        cin>>pos;
    }
    int value;
    cout<<"Enter a value :";
    cin>>value;
    for(i=n-1; i>=pos-1; i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=value;
    
    int endingValue;
    cout<<"Enter a ending value:";
    cin>>endingValue;
    a[n]=endingValue;

    for(i=0; i<n+1; i++)
    {
        cout<<a[i]<<" ";
    }

}

