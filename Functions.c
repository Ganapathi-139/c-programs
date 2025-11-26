#include <stdio.h>
void function()
{
    int a, b, sum;
    printf("Enter a value: ");
    scanf("%d", &a);
    printf("Enter b value: ");
    scanf("%d", &b);
    sum = a + b;
    printf("Sum=%d", sum);
}
int main()
{
    function();
    return 0;
}
