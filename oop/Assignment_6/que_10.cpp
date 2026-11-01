
/* Q10. WAP to define a class VECTOR representing
   a series of float values. Include member functions
   to perform the following tasks:
   a. To create a vector.
   b. To modify the values of a given element.
   c. To multiply by a scalar value.
   d. To display the vector. */

#include <iostream>
using namespace std;

class VECTOR {
    float a[10];
    int n;

public:
    void create() {
        cout << "Enter number of elements: ";
        cin >> n;

        cout << "Enter elements: ";
        for (int i = 0; i < n; i++)
            cin >> a[i];
    }

    void modify() {
        int pos;
        float value;

        cout << "Enter position to modify: ";
        cin >> pos;

        cout << "Enter new value: ";
        cin >> value;

        if (pos >= 1 && pos <= n)
            a[pos - 1] = value;
        else
            cout << "Invalid position!" << endl;
    }

    void multiply() {
        float s;

        cout << "Enter scalar value: ";
        cin >> s;

        for (int i = 0; i < n; i++)
            a[i] *= s;
    }

    void display() {
        cout << "Vector: ";

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";

        cout << endl;
    }
};

int main() {
    VECTOR v;

    v.create();
    v.display();

    v.modify();
    v.display();

    v.multiply();
    v.display();

    return 0;
}
