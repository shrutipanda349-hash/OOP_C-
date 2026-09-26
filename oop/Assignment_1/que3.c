//3. WAP to define a structure EMPLOYEE having elements as name, empid, department, age, and salary. Enter the details of 5 employees and display the details of each employee//
#include<stdio.h>
#include<string.h>

struct E {
    char name[20];
    int empid[5];
    char dept[10];
    int age;
    int salary;

};

int main() {
    struct E EMPLOYEE[5] ;
int i;

    printf("Enter the details of 5 employee:");
    for(i=0;i<5;i++)
    {
        gets( EMPLOYEE[i].name);
         scanf("%d", &EMPLOYEE[i].empid);
       gets(EMPLOYEE[i].dept);
       scanf("%d %d", &EMPLOYEE[i].age,&EMPLOYEE[i].salary);



    }
    for(i=0;i<5;i++)
    {
        printf("\n record no.%d\t Name:%s\t EMPID:%d\t Dept:%s\t Age:%d\t Salary:%d\n",i,EMPLOYEE[i].name,EMPLOYEE[i].empid,EMPLOYEE[i].dept,EMPLOYEE[i].age,EMPLOYEE[i].salary);
    }
    
    

    return 0;
}