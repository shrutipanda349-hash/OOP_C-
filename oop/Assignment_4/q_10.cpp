//10.	WAP to implement strlen() using a user-defined function.
#include <stdio.h>

int mystrlen(char str[])
{
    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }

    return i;
}

int main()
{
    char str[100];
    int length;

    printf("Enter a string: ");
    scanf("%s", str);

    length = mystrlen(str);

    printf("Length of the string = %d", length);

    return 0;
}