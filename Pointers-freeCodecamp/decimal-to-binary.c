#include <stdio.h>
// int quotient(int a[]);

int main()
{
    int x;
    printf("enter a number:");
    scanf("%d", &x);
    printf("%d in binary is ", x);
    for (int i = 0; i < 20; i++)
    {
        int a[] = {x};
        x /= 2;
        //printf("%d ", x);
        int length = sizeof(a) / sizeof(a[0]);
        for (int z = length-1; z >= 0; z--)
        {
            //printf("%d ", a[z]);
            printf("%d", a[z] %= 2);
        }
        if (x == 0)
        {
            break;
        }
    }

    return 0;
}