//11.	Write a user defined function to convert lower case character of the string to upper case.
#include <stdio.h>

void convert(char str[])
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    convert(str);

    printf("Uppercase string = %s", str);

    return 0;
}