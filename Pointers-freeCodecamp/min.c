#include <stdio.h>
int main()
{
    int a[5];
    int length = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < length; i++)
    {
        printf("enter a number:");
        scanf("%d", &a[i]);
    }
    int min = a[1];
    for (int i = 0; i < length; i++)
    {
        if (a[i] < min)
        {

            min = a[i];
        }
    }
    printf("%d", min);
    return 0;
}