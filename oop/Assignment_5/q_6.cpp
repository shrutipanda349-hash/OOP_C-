/*WAP to define a class DISTANCE having members as kms, and metres. Define a member function ADDDISTANCE () which will receive two structure variables as its arguments. The ADDDISTANCE () will add two distance values.*/

#include <iostream>
using namespace std;

class DISTANCE
{
    int km,m;

public:
    void input()
    {
        cout << "Enter kilometer data: ";
        cin >> km;

        cout << "Enter meter data: ";
        cin >> m;
    }

    void display()
    {
        cout << km<<"km"<<" "<<m<<"m";

        cout << endl;
    }

    DISTANCE ADDDISTANCE(DISTANCE D1, DISTANCE D2)
    {
        DISTANCE D3;

        D3.km = D1.km + D2.km;
        D3.m = D1.m + D2.m;

        return D3;
    }
};

int main()
{
    DISTANCE D1, D2, D3;

    cout << "Enter first  distance data:\n";
    D1.input();

    cout << "\nEnter second distance data:\n";
    D2.input();

    D3 = D3.ADDDISTANCE(D1, D2);

    cout << "\nFirst Distance: ";
    D1.display();

    cout << "Second Distance: ";
    D2.display();

    cout << "Sum of these two distance: ";
    D3.display();

    return 0;
}
