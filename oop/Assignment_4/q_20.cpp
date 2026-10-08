//20.	WAP in C++ to find a minimum of the two numbers using inline function.
#include<iostream>
using namespace std;

inline int minimum(int a,int b)
{
    return(a<b)?a:b;
}

int main()
{
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    cout<<"Mininmun number="<<minimum(a,b);
     return 0;
}