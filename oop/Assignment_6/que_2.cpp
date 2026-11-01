
/* Q2. WAP to calculate factorial of a given
   number using copy constructor. */

#include <iostream>
using namespace std;

class Factorial {
    int n;

public:
    Factorial(int x) {
        n = x;
    }

    Factorial(const Factorial &f) {
        n = f.n;
    }

    void calculate() {
        int fact = 1;

        for (int i = 1; i <= n; i++)
            fact *= i;

        cout << "Factorial = " << fact << endl;
    }
};

int main() {
    Factorial f1(5);
    Factorial f2(f1);

    f2.calculate();
    return 0;
}
