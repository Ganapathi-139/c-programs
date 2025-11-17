#include <stdio.h>
int main()
{
    double num1, num2, ans;
    char operator;

    printf("Enter a operator(+,-,x,/): ");
    scanf("%c", &operator);
    printf("Enter a numbers: ");
    scanf("%lf", &num1);
    printf("Enter a numbers: ");
    scanf("%lf", &num2);

    switch (operator)
    {

    case '+':
        ans = num1 + num2;
        printf("%.2lf + %.2lf = %.2lf", num1, num2, ans);
        break;
    case '-':
        ans = num1 - num2;
        printf("%.2lf - %.2lf = %.2lf", num1, num2, ans);
        break;
    case 'x':
        ans = num1 * num2;
        printf("%.2lf x %.2lf = %.2lf", num1, num2, ans);
        break;
    case '/':
        ans = num1 / num2;
        if (num2 == 0)
        {
            printf("%.2lf / %.2lf = Infinite", num1, num2);
        }
        else
        {
            printf("%.2lf / %.2lf = %.2lf", num1, num2, ans);
        }
        break;
    }
    return 0;
}
