#include <stdio.h>
int main()
{
    int i;
    printf("Enter I value: ");
    scanf("%d", &i);
    if (i <= 0)
    {
        printf("I value can't negative or zero!");
    }
    else if (i > 10)
    {
        printf("I value must be less than or  equal to 10");
    }
    else
    {
        while (i <= 10)
        {
            if (i % 2 == 0)
            {
                i *= 2;
                printf("%d\n", i);
            }
            else if (i <= 0)
            {
                printf("I value can't negative or zero!");
            }
            else
            {
                i += 2;
                printf("%d\n", i);
            }
        }
    }

    return 0;
}
