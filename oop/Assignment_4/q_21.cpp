//Write a C++ program to find the reverse  the elements of an array using inline function.
#include<iostream>
using namespace std;
inline void reverse(int a[10],int n)
{
	int i, temp;
	for(i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
	}

}

int main(){
	int a[10],n,i,res;
	cout<<"Enter size:";
        cin>>n;
	cout<<"Enter array elements:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	res=reverse(a,n);
	cout<<res;
	return 0;
}

