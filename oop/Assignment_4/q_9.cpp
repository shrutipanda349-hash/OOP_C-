//9.	WAP to display a string using function.
#include <stdio.h>

void display(char str[])
{
    printf("The string is: %s", str);
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    display(str);

    return 0;
}