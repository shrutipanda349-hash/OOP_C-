
/* Q4. WAP to define a class STUDENT having members
   name, roll no., branch and CGPA. Enter the details
   of 5 students using default and parameterized
   constructors. Display the details of the student
   having the highest CGPA. */

#include <iostream>
using namespace std;

class STUDENT {
    string name, branch;
    int roll;
    float cgpa;

public:
    STUDENT() {
        name = "";
        branch = "";
        roll = 0;
        cgpa = 0;
    }

    STUDENT(string n, int r, string b, float c) {
        name = n;
        roll = r;
        branch = b;
        cgpa = c;
    }

    float getCGPA() {
        return cgpa;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll << endl;
        cout << "Branch: " << branch << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main() {
    STUDENT s[5] = {
        STUDENT("Aman", 1, "CSE", 8.2),
        STUDENT("Riya", 2, "IMCA", 9.1),
        STUDENT("Ravi", 3, "CSE", 7.8),
        STUDENT("Neha", 4, "IMCA", 8.7),
        STUDENT("Raj", 5, "CSE", 8.5)
    };

    int max = 0;

    for (int i = 1; i < 5; i++) {
        if (s[i].getCGPA() > s[max].getCGPA())
            max = i;
    }

    cout << "Student with highest CGPA:" << endl;
    s[max].display();

    return 0;
}
