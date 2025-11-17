#include <stdio.h>
int main()
{
    float u, a, d;
    int t;
    printf("Enter the value of acceleration(a): ");
    scanf("%f", &a);
    printf("Enter the value of initial velocity(u): ");
    scanf("%f", &u);
    printf("Enter time(t): ");
    scanf("%d", &t);
    d = (u * t) + (a * t * t) / 2;
    printf("Answer = (u*t) + (a*t*t) / 2\n");
    printf("Answer= %.2f", d);
    return 0;
}
