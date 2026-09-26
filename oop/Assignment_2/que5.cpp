//WAP in c++ to find the sum of a digit of a number//
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    int i, sum=0;
    while(n!=0)
    {
        int rem = n%10;
        sum= sum+rem;
        n=n/10;
    }
    cout<<"Sum of the digits"<<"\n"<<sum;
    return 0;



}