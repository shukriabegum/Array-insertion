#include<iostream>
using namespace std;
 int main()
 {
     int n,i;
     cout<<"Enter a size:";
     cin>>n;
     int a[n+1];
     for(i=0;i<n;i++)
     {
         cin>>a[i];
     }
     int choice;
     cout<<"1.insertion at Beginning "<<endl;
     cout<<"2.insertion at ending"<<endl;
     cout<<"3.insertion at given position"<<endl;
     cout<<"Choice: ";
     cin>>choice;
     if(choice==1)
     {
         int value;
         cout<<"Enter a value:";
         cin>>value;

         for(i=n-1;i>=0;i--)
         {
             a[i+1]=a[i];
         }
         a[0]=value;


         for(i=0;i<n+1;i++)
         {
             cout<<a[i];
         }
     }
      else if(choice==2)
     {
         int value;
         cout<<"Enter a value:";
         cin>>value;

         a[n]=value;

         for(i=0;i<n+1;i++)
         {
             cout<<a[i];
         }
     }
     else if(choice==3)


     {  int pos;
     cout<<"Enter a position:";
     cin>>pos;
     if(pos<1||pos>n+1)
     {
    cout<<"Invalid";
     } else{
int value;
         cout<<"Enter a value:";
         cin>>value;
         int index=pos-1;
         for(i=n-1;i>=index;i--)
         {
             a[i+1]=a[i];
         }
         a[index]=value;
         for(i=0;i<n+1;i++)
         {
             cout<<a[i];
         }
     }
     }


 }
