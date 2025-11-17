#include <stdio.h>
int main()
{
    int n, t, r, rev = 0;
    printf("Enter value of n: ");
    scanf("%d", &n);
    t = n;
    while (n > 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    if (t == rev)
    {
        printf("the number is palindrome");
    }
    else
    {
        printf("not a palindrome");
    }
    return 0;
}
