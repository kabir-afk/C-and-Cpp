// to find the largest element in array
#include <stdio.h>

int main()
{
    int a[5];
    int length = sizeof(a) / sizeof(a[0]);
    for (int x = 0; x < length; x++)
    {
        printf("enter a number:");
        scanf("%d", &a[x]);
    }
    int max = a[0];
    {

        for (int i = 0; i < length; i++)
        {
            if (a[i] > max)
            {
                max = a[i];
            }
        }
    }
    printf("%d", max);

    return 0;
}