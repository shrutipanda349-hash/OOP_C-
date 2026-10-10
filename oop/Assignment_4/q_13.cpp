//13.	WAP to implement strcmp() using a user defined function
#include <stdio.h>

int mystrcmp(char str1[], char str2[])
{
    int i = 0;

    while (str1[i] == str2[i])
    {
        if (str1[i] == '\0')
            return 0;

        i++;
    }

    return str1[i] - str2[i];
}

int main()
{
    char str1[100], str2[100];
    int result;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    result = mystrcmp(str1, str2);

    if (result == 0)
        printf("Both strings are equal.");
    else
        printf("Both strings are not equal.");

    return 0;
}