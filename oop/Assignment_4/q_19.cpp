//19.	Write a C++ program to find the sum of the elements of an array using function with default argument.
#include<iostream>
using namespace std;

int sum(int a[],int n=5)
{
    int s=0;
    for(int i=0;i<n;i++)
    {
        s=s+a[i];
    }
        return s;
}

int main()
{
    int a[5]={10,20,30,40,50};
    cout<<"Sum of array elements="<<sum(a);
    return 0;
}