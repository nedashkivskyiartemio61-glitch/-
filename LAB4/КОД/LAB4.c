#include <stdio.h>
#define MAX 10
int binarySearch(double A[MAX][MAX], int m, int n, int *row, int *col)
{
    for (int j = 0; j < n; j++)
    {
        int left = 0;
        int right = m - 1;
        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (A[mid][j] >= 0 && A[mid][j] <= 5)
            {
                *row = mid;
                *col = j;
                return 1;
            }
            else if (A[mid][j] > 5)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
    }
    return 0;
}
int main()
{
    double A[MAX][MAX];
    int m, n;
    int row, col;
    printf("Enter number of rows (7-10): ");
    scanf("%d", &m);
    printf("Enter number of columns (7-10): ");
    scanf("%d", &n);
    if (m < 7 || m > 10 || n < 7 || n > 10)
    {
        printf("Incorrect matrix size\n");
        return 0;
    }
    printf("\nEnter matrix elements:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%lf", &A[i][j]);
        }
    }
    printf("\nMatrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%8.2lf", A[i][j]);
        }
        printf("\n");
    }
    if (binarySearch(A, m, n, &row, &col))
    {
        printf("\nElement from range [0, 5] was found\n");
        printf("Value: %.2lf\n", A[row][col]);
        printf("Row: %d\n", row + 1);
        printf("Column: %d\n", col + 1);
    }
    else
    {
        printf("\nElements from range [0, 5] were not found\n");
    }
    return 0;
}