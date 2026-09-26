//WAP to define a structure DISTANCE having members as kms, and metres. Define a user-defined function ADDDISTANCE () which will receive two structure variables as its arguments and will return a structure variable. The ADDDISTANCE () will add two distance values. //
#include <stdio.h>

struct DISTANCE {
    int kms;
    float metres;
};

struct DISTANCE ADDDISTANCE(struct DISTANCE d1, struct DISTANCE d2) {
    struct DISTANCE sum;

    sum.kms = d1.kms + d2.kms;
    sum.metres = d1.metres + d2.metres;

    // Convert metres into kilometres if metres is 1000 or more
    if (sum.metres >= 1000) {
        sum.kms = sum.kms + (int)(sum.metres / 1000);
        sum.metres = sum.metres - ((int)(sum.metres / 1000) * 1000);
    }

    return sum;
}

int main() {
    struct DISTANCE d1, d2, result;

    printf("Enter first distance (kms and metres): ");
    scanf("%d %f", &d1.kms, &d1.metres);

    printf("Enter second distance (kms and metres): ");
    scanf("%d %f", &d2.kms, &d2.metres);

    result = ADDDISTANCE(d1, d2);

    printf("\nTotal Distance = %d kms %.2f metres\n",
           result.kms, result.metres);

    return 0;
}