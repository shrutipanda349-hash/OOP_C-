//14.	Write a C++ Program with three different functions with same name to find the sum of digits using function overloading.
#include<iostream>
using namespace std;

int sum(int n)
{
    int s=0;
    while(n>0)
    {
        s=s+n%10;
        n=n/10;
    }
    return s;
}
int sum(int a,int b)
{
    return sum(a)+sum(b);

}

int sum(int a,int b,int c)
{
    return sum(a)+sum(b)+sum(c);
}

int main()
{
    int n,a,b,c;

    cout<<"Enter a number:";
    cin>>n;
    cout<<"Sum of digit ="<<sum(n);

    cout<<"\nEnter two numbers:";
    cin>>a>>b;
    cout<<"Sum of digits="<<sum(a,b);


    cout<<"\nEnter three numbers:";
    cin>>a>>b>>c;
    cout<<"Sum of digits ="<<sum(a,b,c);

    return 0;
}