#include <math.h>
int main()
{
    float p, t, r, si, ci;
    printf("Enter principal amount(p): ");
    scanf("%f", &p);
    printf("Enter time in year(t): ");
    scanf("%f", &t);
    printf("Enter rate in percent(r): ");
    scanf("%f", &p);
    si = (p * t * r) / 100;
    ci = p * (pow(1 + r / 100, t) - 1);
    printf("simple intrest = %.3f\n", si);
    printf("coumpound intrest = %.3f\n", ci);
    return 0;
}
