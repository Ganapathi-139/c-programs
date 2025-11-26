#include <stdio.h>
int main()
{
    int a, b, c, max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    max = a > b ? (a > c ? b : c) : (b > c ? b : c);
    printf("largest number is %d", max);
    return 0;
}
