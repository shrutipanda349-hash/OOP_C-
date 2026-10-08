//23.	WAP using a inline function compare() to check whether two arrays are equal or not and print the result in main() 
#include<iostream>
using namespace std;

inline bool compare(int a[],int b[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        return false;
    }
    return true;
}

int main()
{
    int a[5]={10,20,30,40,50};
    int b[5]={10,20,30,40,50};
    if(compare(a,b,5))
    cout<<"Both arrays are equal.";
    else
        cout<<"Both arrays are not equal.";

        return 0;

}