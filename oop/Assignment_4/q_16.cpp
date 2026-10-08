//16.	Write a C++ program to Swap variables using Function Overloading.
#include<iostream>
using namespace std;

void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
 
void swap(float &a,float &b)
{
   float temp=a;
   a=b;
   b=temp;
}

int main()
{
    int a=10,b=20;
    float x=10.5,y=20.5;
    cout<<"Before swapping integer : a="<<",b="<<b;
    swap(a,b);
    cout<<"After swapping integers: a="<<a<<",b="<<b;
    cout<<"\n Before swappping floats:x="<<x<<",y="<<y;
    swap(x,y);;
    cout<<"After swapping floats:x="<<x<<",y="<<y;

    return 0;

}