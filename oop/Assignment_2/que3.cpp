//WAP in c++ to swap the values of 2 variables using 3rd variable//
#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter first number :";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swapping,first number a="<<a<<",second number ="<<b<<"\n";
    return 0;
}