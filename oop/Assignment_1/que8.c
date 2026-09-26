//WAP to define a structure TIME having members as hour, minute, and second. Define a user-defined function ADDTIME () which will receive two structure variables as its arguments and will return a structure variable. The ADDTIME () will add two different time values. //
#include <stdio.h>

struct TIME {
    int hour;
    int minute;
    int second;
};

struct TIME ADDTIME(struct TIME t1, struct TIME t2) {
    struct TIME sum;

    sum.second = t1.second + t2.second;
    sum.minute = t1.minute + t2.minute;
    sum.hour = t1.hour + t2.hour;

    // Convert seconds into minutes
    if (sum.second >= 60) {
        sum.minute = sum.minute + (sum.second / 60);
        sum.second = sum.second % 60;
    }

    // Convert minutes into hours
    if (sum.minute >= 60) {
        sum.hour = sum.hour + (sum.minute / 60);
        sum.minute = sum.minute % 60;
    }

    return sum;
}

int main() {
    struct TIME t1, t2, result;

    printf("Enter first time (hour minute second): ");
    scanf("%d %d %d", &t1.hour, &t1.minute, &t1.second);

    printf("Enter second time (hour minute second): ");
    scanf("%d %d %d", &t2.hour, &t2.minute, &t2.second);

    result = ADDTIME(t1, t2);

    printf("\nTotal Time = %d hour %d minute %d second\n",
           result.hour, result.minute, result.second);

    return 0;
}