#include <stdio.h>
int main()
{
    int i, j, r, c;
    printf("Enter value number of Rows: ");
    scanf("%d", &r);
    printf("Enter value number of Columns: ");
    scanf("%d", &c);
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}
