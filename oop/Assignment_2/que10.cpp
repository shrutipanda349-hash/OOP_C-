//10.	WAP in C++ to reverse an array without using another array//
#include<iostream>
using namespace std;
int main(){
    int a[10],i,temp;
    cout<<"enter 10 number:";
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<5;i++)
    {
        temp=a[i];
     a[i]=a[9-i];
     a[9-i]=temp;
    }
    cout<<"Reversed Array:"<<"\n";
    for(i=0;i<10;i++)
{
    cout<<a[i]<<"\n";
}

    return 0;



}