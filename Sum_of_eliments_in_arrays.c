#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter no.of eliments: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter eliments: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    printf("total= %d", sum);
    return 0;
}
