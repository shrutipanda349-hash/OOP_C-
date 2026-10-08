//17.	Write a C++ Program to Compare Two Strings using Overloading
#include<iostream>
#include<cstring>
using namespace std;

void compare(char str1[], char str2[])
{

    if(strcmp(str1,str2)==0)
     { cout<<"String are equal.";
     }else
      {  cout <<"String are not equal.";
      }
}

void compare(string str1,string str2)
{
    if(str1==str2)
     cout<<"string are equal.";
    else
     cout<<"String are not equal.";

}

int main()
{
    char str1[50], str2[50];
    string s1,s2;
    cout<<"Enter first charchter string:";
    cin>>str1;
    cout<<"Enter second character string:";
    cin>>str2;
    compare(str1,str2);
    cout<<"\n Enter first string:";
    cin>>s1;
    cout<<"Enter second string:";
    cin>>s2;
    compare(s1,s2);

    return 0;
    
}