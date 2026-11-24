#include <stdio.h>
int main()
{
    int A[100][100];
    int n, i, j, T;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 1; i < n; i++)
    {
        T = A[i][i];
        j = i;

        while (j > 0 && A[j - 1][j - 1] > T)
        {
            A[j][j] = A[j - 1][j - 1];
            j--;
        }

        A[j][j] = T;
    }
    printf("Result:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}