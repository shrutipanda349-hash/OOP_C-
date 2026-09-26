//WAP to define a structure EMPLOYEE having elements as name, empid, department, age, and salary. Enter the details of 5 employees. Display the details of those employees whose salary is greater than the average salary value of all employees//
#include <stdio.h>

struct EMPLOYEE {
    char name[50];
    int empid;
    char dept[30];
    int age;
    int salary;
};

int main() {
    struct EMPLOYEE employee[5];
    int i;

    printf("Enter the details of 5 employees:\n");

    for (i = 0; i < 5; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Name: ");
        scanf(" %[^\n]", employee[i].name);

        printf("Enter Employee ID: ");
        scanf("%d", &employee[i].empid);

        printf("Enter Department: ");
        scanf(" %[^\n]", employee[i].dept);

        printf("Enter Age: ");
        scanf("%d", &employee[i].age);

        printf("Enter Salary: ");
        scanf("%d", &employee[i].salary);
    }

    printf("\n----- Employee Details -----\n");

    for (i = 0; i < 5; i++) {
        printf("\nRecord No. %d\n", i + 1);
        printf("Name: %s\n", employee[i].name);
        printf("EMP ID: %d\n", employee[i].empid);
        printf("Department: %s\n", employee[i].dept);                                                                                                    
        printf("Age: %d\n", employee[i].age);
        printf("Salary: %d\n", employee[i].salary);
    }

    return 0;
}