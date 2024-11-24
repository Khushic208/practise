//insertion in array at specifc position
#include <iostream>
#define maxsize 10;
using namespace std;
int main()
{
cout<<"\nName: KAVYA BODAS";
cout<<"\nRoll No: 0832CS231097";
cout<<"\nClass: CS-'B";
static int a[10],i,n,pos,no;
cout<<"\nEnter the no. of elments you want in array:";
cin>>n;
cout<<"\nEnter the elements you want in array:";
for(i=1;i<=n;i++)
cin>>a[i];
cout<<"\nEnter new position:";
cin>>pos;
cout<<"\nEnter new no:";
cin>>no;
for(i=n;i>=pos;i--)
a[i+1]=a[i];
n++;
a[pos]=no;
cout<<"\nElements in array are:";
for(i=1;i<=n;i++)
cout<<"\n"<<a[i];
return 0;
}