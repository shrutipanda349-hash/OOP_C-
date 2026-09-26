//WAP to define a structure COMPLEX having members as real, and imag. Define a user-defined function ADDCOMPLEX () which will receive two structure variables as its arguments and will return a structure variable. The ADDCOMPLEX () will add two complex numbers. //
#include <stdio.h>

struct COMPLEX {
    float real;
    float imag;
};

struct COMPLEX ADDCOMPLEX(struct COMPLEX c1, struct COMPLEX c2) {
    struct COMPLEX sum;

    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;

    return sum;
}

int main() {
    struct COMPLEX c1, c2, result;

    printf("Enter real and imaginary parts of first complex number: ");
    scanf("%f %f", &c1.real, &c1.imag);

    printf("Enter real and imaginary parts of second complex number: ");
    scanf("%f %f", &c2.real, &c2.imag);

    result = ADDCOMPLEX(c1, c2);

    printf("\nSum of complex numbers = %.2f + %.2fi",
           result.real, result.imag);

    return 0;
}