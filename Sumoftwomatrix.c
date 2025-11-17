#include <stdio.h>

int main()
{
    int R, C;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &R, &C);

    int A[R][C], B[R][C], D[R][C];

    printf("Enter elements of first matrix (A):\n");
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of second matrix (B):\n");
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            D[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Sum of matrices (D = A + B):\n");
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            printf("%d ", D[i][j]);
        }
        printf("\n");
    }

    return 0;
}
