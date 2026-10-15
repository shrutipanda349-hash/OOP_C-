/*    7. WAP to define a class TIME having members as hour, minute, and second. Define a member- function ADDTIME () which will receive two structure variables as its arguments and will return a object. The ADDTIME () will add two different time values. 
*/

#include <iostream>
using namespace std;

class TIME
{
    int min,hr,sec;

public:
    void input()
    {
        cout << "Enter second  part: ";
        cin >> sec;

        cout << "Enter minute part: ";
        cin >> min;

	cout << "Enter hour part: ";
        cin >> hr;
    }

    void display()
    {
        cout <<hr<<"hr"<<" "<<min<<"min"<<" "<<sec<<"sec"<<endl;
    }

    TIME ADDTIME(TIME t1,TIME t2)
    {
        TIME t3;

        t3.sec = t1.sec + t2.sec;
	t3.min =t1.min+t2.min+(t3.sec/60);
	t3.hr=t1.hr+t2.hr+(t3.min/60);
	t3.min%=60;
	t3.sec%=60;

        return t3;
    }
};

int main()
{
    TIME t1, t2, t4;

    cout << "Enter first time:\n";
    t1.input();

    cout << "\nEnter second time:\n";
    t2.input();

    t4 = t4.ADDTIME(t1, t2);

    cout << "\nFirst time: ";
    t1.display();

    cout << "Second time: ";
    t2.display();

    cout << "Sum of times: ";
    t4.display();

    return 0;
}
