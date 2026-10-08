//22.	WAP to find average of the element present in  the array using inline function. 
#include<iostream>
using namespace std;
inline float average(int a[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];

    }
    return(float)sum/n;
}

int main()
{
    int a[50]={10,20,30,40,50};
    cout<<"Average of array elements ="<<average(a,5);
    return 0;
} 