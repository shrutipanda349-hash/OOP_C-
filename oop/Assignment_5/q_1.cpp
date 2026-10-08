/*WAP to define a class TEST which is having two data members x, y and member functions setvalue() to enter the values and printvalue() to display the values. Add a private member function largest() to find the largest among the two data members and display the result.*/

#include<iostream>
using namespace std;
 
class test
{
	int x,y;
	public:
	void setvalue()
	{
		cout<<"Enter 1st value:";
		cin>>x;
		cout<<"Enter 2nd value:";
		cin>>y;
	}
	void output()
	{
		cout<<"Entered 2 values are:"<<x<<"\t"<<y;
	}
	private:
	int largest()
	{
		if(x>y)
		{
			return x;

		}
		else
		{
			return y;
		}
	}
	public:
	void printvalue()
	{
		int l=largest();
		cout<<l<<"\t"<<"is the largest number."<<"\n";
	}
};

int main()
{
  class test T1;

  T1.setvalue();
  T1.printvalue();
}



