/*7	WAP in C++ to calculate hours, minutes, and seconds by inputting seconds as input. For example: 
INPUT	: Enter the time value in seconds: 3672 
OUTPUT: 1 Hour 1 minute 12 seconds */
#include<iostream>
using namespace std;
int main(){
    int h,m,s;
    cout<<"enter time in sec:";

        cin>>s;
    h=s/3600;
    m=(s-(3600*h))/60;
    s=(s-(3600*h)-(60*m));

    cout<< h <<"h"<<"\t"<< m <<"m"<<"\t"<<s<<"s"<<"\n";
    
    return 0;



}
