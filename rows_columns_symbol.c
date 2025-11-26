#include <stdio.h>
int main()
{
    int rows;
    int colums;
    char symbol;

    printf("enter the no. of rows: ");
    scanf("%d", &rows);

    printf("enter the no. of colums: ");
    scanf("%d", &colums);

    printf("enter the symbol: ");
    scanf(" %c", &symbol);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colums; j++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}
