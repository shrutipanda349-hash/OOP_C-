
/* Q7. WAP to define a class EMPLOYEE having
   elements name, emp_id, department, age and salary.
   Enter the details of 5 employees. Display the
   details of those employees whose salary is
   greater than the average salary of all employees. */

#include <iostream>
using namespace std;

class EMPLOYEE {
public:
    string name, department;
    int emp_id, age;
    float salary;

    void input(string n, int id, string d, int a, float s) {
        name = n;
        emp_id = id;
        department = d;
        age = a;
        salary = s;
    }

    void display() {
        cout << name << " " << emp_id << " "
             << department << " " << age << " "
             << salary << endl;
    }
};

int main() {
    EMPLOYEE e[5];

    e[0].input("Aman", 1, "IT", 25, 30000);
    e[1].input("Riya", 2, "HR", 24, 40000);
    e[2].input("Raj", 3, "IT", 26, 50000);
    e[3].input("Neha", 4, "Sales", 23, 20000);
    e[4].input("Ravi", 5, "HR", 27, 60000);

    float sum = 0;

    for (int i = 0; i < 5; i++)
        sum += e[i].salary;

    float avg = sum / 5;

    cout << "Average salary = " << avg << endl;
    cout << "Employees earning above average:" << endl;

    for (int i = 0; i < 5; i++) {
        if (e[i].salary > avg)
            e[i].display();
    }

    return 0;
}
