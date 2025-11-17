#include <stdio.h>
int main()
{
    int a, b;
    float p, q;
    int c;
    float r;

    printf("give a,b value: ");
    scanf("%d,%d", &a, &b);
    c = a + b;
    printf("answer = %d\n", c);

    printf("give p,q value: ");
    scanf("%f,%f", &p, &q);
    r = p + q;
    printf("answer = %.2f\n", r);
    return 0;
}
