#include <stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("enter temperature in fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) / 1.8;
    printf("formula: (%.2f - 32) / 1.8\n", fahrenheit);
    printf("temperature in celsius: %.2f", celsius);
    return 0;
}
