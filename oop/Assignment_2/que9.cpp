/*9.	Enter mark obtained by a student in a subject and print the respective grade using else-if ladder statement. Consider the following grading system: 
Score out of 100 Marks          					Grade 
90 & above up to 100 						O 
80 & above but less than 90 					E 
70 & above but less than 80 					A 
60 & above but less than 70 					B 
50 & above but less than 60 					C 
40 & above but less than 50 					D 
Less than 40 or Absent in Exam 				U 
*/
#include<iostream>
using namespace std;
int main(){
    int mark;
    cout<<"Enter Mark:";

        cin>>mark;
    if(mark>=90&& mark<=100)
    {
        cout<<"Grade:O";
            
    }
    else if(mark>=80&& mark<=90)
    {
        cout<<"Grade:E";
            
    }
    else if(mark>=70&& mark<=80)
    {
        cout<<"Grade:A";
            
    }
    else if(mark>=60&& mark<=70)
    {
        cout<<"Grade:B";
            
    }
    else if(mark>=50&& mark<=60)
    {
        cout<<"Grade:C";
            
    }
    else if(mark>=40&& mark<=50)
    {
        cout<<"Grade:D";
            
    }
    else
    {
        cout<<"Grade:U";
            
    }

  
return 0;


}