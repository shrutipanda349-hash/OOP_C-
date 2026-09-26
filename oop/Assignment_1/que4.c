//4. WAP to define a structure STUDENT having members as name, roll_ no, branch, and CGPA. Enter the details of 5 students. Display the details of the student having the highest CGPA. //

#include<stdio.h>
#include<string.h>

struct S {
    char name[20];
    char branch[10];
    int roll_no;
    float CGPA;

};

int main() {
    struct S student[5] ;
int i,highest_CGPA_index=0;

    printf("Enter the details of 5 student:\n");
    for(i=0;i<5;i++)
    {
        gets(student[i].name);
        gets(student[i].branch);
         scanf("%d", &student[i].roll_no);
       
       scanf("%f", &student[i].CGPA);



    }
    for(i=0;i<5;i++)
    {
        printf("\n record no.%d\t Name:%s\t  Branch:%s\t roll no:%d\t CGPA:%f\n",i,student[i].name,student[i].branch,student[i].roll_no,student[i].CGPA);
    }
    for(i=0;i<5;i++)
    {
        if(student[i].CGPA>student[highest_CGPA_index].CGPA)
        {
            highest_CGPA_index=i;
        }
    }
    for(i=0;i<5;i++)
    {
        printf("Student with highest CGPA :\n");
        printf("\n Name:%s\t  Branch:%s\t roll no:%d\t CGPA:%f\n",student[highest_CGPA_index].name,student[highest_CGPA_index].branch,student[highest_CGPA_index].roll_no,student[highest_CGPA_index].CGPA);
    }
   

    return 0;
}