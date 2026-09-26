//WAP in c++ to check whether a number is prime or not//

#include<iostream>
using namespace std;
int main()
{
    int a,i,c=0;
    cout<<"Enter the number :";
    cin>>a;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            c++;
        
        }
    }
    if(c==2)
    {
        cout<<"Prime number"<<"\n";

    }
    else
   {
    cout<<"not a prime no."<<"\n";
   }return 0;
}