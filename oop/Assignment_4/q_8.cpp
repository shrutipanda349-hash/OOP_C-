//  8.	WAP to check whether the matrix is symmetric or not using function and print the result in main(). 
  #include <stdio.h>

int checkSymmetric(int a[10][10], int n)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] != a[j][i])
                return 0;
        }
    }

    return 1;
}

int main()
{
    int a[10][10], n, i, j;

    printf("Enter the order of matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    if (checkSymmetric(a, n))
        printf("The matrix is symmetric.");
    else
        printf("The matrix is not symmetric.");

    return 0;
}