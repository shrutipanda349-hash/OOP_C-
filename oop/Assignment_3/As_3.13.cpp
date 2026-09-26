//WAP in C++ to Display the decimal equivalent of an entered binary number.  
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	long long bin;
      int dec=0,base=1,rem;
     cout<<"Enter a Binary number:";
cin>>bin;
long long temp=bin;
while(temp>0)
{	rem=temp%10;
        dec=dec+rem*base;
	base=base*2;
	temp=temp/10;
}
cout<<"Decimal equivalence is:"<<dec<<"\n";
return 0;
}


