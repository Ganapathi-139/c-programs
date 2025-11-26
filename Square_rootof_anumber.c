#include <stdio.h>
#include <math.h>
int main()
{
    double num, root;
    printf("enter a number: ");
    scanf("%lf", &num);
    root = sqrt(num);
    printf("square root of %.2lf is %.2lf", num, root);
}
