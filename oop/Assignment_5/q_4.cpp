/*WAP to define a class STUDENT having members as name, roll_ no, branch, and CGPA. Enter the details of 5 students. Add member functions to enter the student details and display them. Define a private member function to display the details of the student having the highest CGPA. */


#include<iostream>
using namespace std;

class Student
{
	char name[20],branch[20];
	int roll_no;
	float cgpa;
	public:
	void setvalue();
	void printvalue();
	void display(){
		class Student S[10];
		highest(S);
	}
	private:
	void highest(class Student S[]);
	
};
	void Student:: setvalue()
	{
		cout<<"Enter name of the student :";
		cin>>name;
		cout<<"Enter roll no:";
                cin>>roll_no;
		cout<<"Enter branch:";
		cin>>branch;
		cout<<"Enter cgpa:";
		cin>>cgpa;

	}

	void Student::printvalue()
	{
	 cout<<" Name of the Student :"<<name<<"\n";
         cout<<" Roll NUMBER :"<<roll_no<<"\n";
         cout<<" Branch:"<<branch<<"\n";
         cout<<" CGPA:"<<cgpa<<"\n";

	}
	
	void Student::highest(class Student S[])
	{     int high=0;
		for(int i=0;i<5;i++)
		{
			if(S[i].cgpa>high)
			{    
				high=S[i].cgpa;
			}
		}
		cout<<"Highest cgpa is:"<<high;
	}

int main()
{
  class Student S[5];
for(int i=0;i<5;i++)
{  cout<<"Student no:"<<i+1<<"\n";

	S[i].setvalue();
}
for(int i=0;i<5;i++)
{  cout<<"Student no:"<<i+1<<"\n";
	S[i].printvalue();

}
}

