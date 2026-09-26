//2. WAP to define a structure POINT having elements as Xco, and Yco. Enter two points and then find out the distance between them. //
#include <stdio.h>
#include <math.h>

struct POINT {
    float X;
    float Y;
};

int main() {
    struct POINT p1, p2;
    float distance;

    printf("Enter X and Y coordinates of first point: ");
    scanf("%f %f", &p1.X, &p1.Y);

    printf("Enter X and Y coordinates of second point: ");
    scanf("%f %f", &p2.X, &p2.Y);

    distance = sqrt(pow(p2.X - p1.X, 2) +
                    pow(p2.Y - p1.Y, 2));

    printf("Distance between the two points = %.2f\n", distance);

    return 0;
}