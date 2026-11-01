
/* Q6. WAP to define a class DISTANCE having members
   kms and metres. Define a user-defined function
   ADDDISTANCE() which receives two objects as
   arguments and returns an object. ADDDISTANCE()
   will add two distance values. */

#include <iostream>
using namespace std;

class DISTANCE {
    int kms, metres;

public:
    DISTANCE(int k = 0, int m = 0) {
        kms = k + m / 1000;
        metres = m % 1000;
    }

    DISTANCE ADDDISTANCE(DISTANCE d) {
        return DISTANCE(kms + d.kms,
                        metres + d.metres);
    }

    void display() {
        cout << kms << " km " << metres
             << " metres" << endl;
    }
};

int main() {
    DISTANCE d1(5, 700), d2(3, 600);
    DISTANCE d3 = d1.ADDDISTANCE(d2);

    cout << "Total distance = ";
    d3.display();

    return 0;
}
