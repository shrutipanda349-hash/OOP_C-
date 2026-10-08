/*WAP to define a class COMPLEX having members as real, and imag. Define member functions to input the data, display the data and ADDCOMPLEX () which will receive two objects of COMPLEX class as its arguments and will return an object. The ADDCOMPLEX () will add two complex numbers.*
*/
#include <iostream>
using namespace std;

class COMPLEX
{
    int real, imag;

public:
    void input()
    {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    void display()
    {
        cout << real;

        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";

        cout << endl;
    }

    COMPLEX ADDCOMPLEX(COMPLEX c1, COMPLEX c2)
    {
        COMPLEX c3;

        c3.real = c1.real + c2.real;
        c3.imag = c1.imag + c2.imag;

        return c3;
    }
};

int main()
{
    COMPLEX c1, c2, c3;

    cout << "Enter first complex number:\n";
    c1.input();

    cout << "\nEnter second complex number:\n";
    c2.input();

    c3 = c3.ADDCOMPLEX(c1, c2);

    cout << "\nFirst complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    cout << "Sum of complex numbers: ";
    c3.display();

    return 0;
}
