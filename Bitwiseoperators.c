#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Bitwise Operations:\n");
    printf("Bitwise AND (&): %d & %d = %d\n", a, b, a & b);
    printf("Bitwise OR (|): %d | %d = %d\n", a, b, a | b);
    printf("Bitwise XOR (^): %d ^ %d = %d\n", a, b, a ^ b);
    printf("Left shift (<<): %d << %d = %d\n", a, b, a << b);
    printf("right shift (>>): %d >> %d = %d\n", a, b, a >> b);
    return 0;
}
