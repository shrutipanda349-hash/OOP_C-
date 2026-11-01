//WAP to print student details using constructor and destructor:
#include<iostream>
using namespace std;

class Student
{
	string name,branch;
	int roll_no;
	float cgpa;
	public:
	Student()
	{
		name="Swati";
		roll_no=29;
		branch="imca";
		cgpa=8.90;
	}
	void display()
	{
		cout<<"name="<<name<<endl;
		cout<<"roll-no="<<roll_no<<endl;
		cout<<"Branch="<<branch<<endl;
		cout<<"CGPA="<<cgpa<<endl;
	
	}

~Student(){cout<<"deconstructor is been called."<<endl;}

};


int main()
{
  Student S;
  S.display();

}


