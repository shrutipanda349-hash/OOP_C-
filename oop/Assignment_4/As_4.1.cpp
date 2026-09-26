/*Write a program to check whether the entered number is palindrome or not. The function returns 1 if the number is palindrome otherwise it returns 0.*/
#include<iostream>
using namespace std;
int main()
{
	int num,rev=0,rem;
	cout<<"Enter the number:";
	cin>>num;
	int temp=num;
	while(temp!=0){
		rem=temp%10;
		rev=(rev*10)+rem;
		temp/=10;
	}
	if(num==rev)
		{
			cout<<"1\n";
		}
	else{
		cout <<"0\n";
	}
}





























