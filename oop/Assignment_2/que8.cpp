//WAP IN C++ to find the number is armstrong number or not//
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num,c=0;
    cout<<"Enter the no."<<"\n";
    cin>>num;
    int temp= num;
    int t= num;
    while(t!=0)
    {
        t=t/10;
        c++;
    }
    int rem =0,sum=0;
    while(temp!=0)
    {
        rem=temp%10;
        sum= sum+round(pow((double)rem, c));
        temp=temp/10;
    }
    if(num==sum){
    cout<<"It is a armstrong";}
    else
    {
    cout<<"It is not a armstrong";
    }
    return 0;
}