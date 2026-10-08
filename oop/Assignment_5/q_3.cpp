/*WAP to define a class EMPLOYEE having elements as name, emp_id, department, age, and salary. Enter the details of 5 objects of employee class and display the details of each employee. */

#include<iostream>
using namespace std;

class Employee
{
	char name[20],emp_id[20],department[10];
	int age,salary;
	public:
	void setvalue();
	void printvalue();
};
	void Employee:: setvalue()
	{
		cout<<"Enter name of the employee :";
		cin>>name;
		cout<<"Enter employee id:";
                cin>>emp_id;
		cout<<"Enter department:";
		cin>>department;
		cout<<"Enter age:";
		cin>>age;
		cout<<"Enter salary:";
		cin>>salary;
	}

	void Employee::printvalue()
	{
	 cout<<" Name of the Employee :"<<name<<"\n";
         cout<<" Employee Id :"<<emp_id<<"\n";
         cout<<" Department:"<<department<<"\n";
         cout<<" Age:"<<age<<"\n";
	 cout<<" Salary:"<<salary<<"\n";

	}


int main()
{
  class Employee E[5];
for(int i=0;i<5;i++)
{  cout<<"Employee no:"<<i<<"\n";

	E[i].setvalue();
}
for(int i=0;i<5;i++)
{  cout<<"Employee no:"<<i<<"\n";
	E[i].printvalue();

}
}

