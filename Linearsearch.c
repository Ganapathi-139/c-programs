#include <stdio.h>
int main()
{
    int n, i, j, key, found = 0, pos;
    printf("Enter no.of eliments: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter eliments: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter eliment to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            found = 1;
            pos = i;
        }
    }
    if (found == 1)
    {
        printf("Eliment %d found at %d\n", key, pos);
    }
    else
    {
        printf("Eliment %d not found\n", key);
    }
}
