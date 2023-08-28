#include <stdio.h>
#include <math.h>
int main()
{
    int a[5] = {400, 64, 1, 49, 100};
    int i;
    for (i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("elements of array:");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", sqrt( a[i]));
    }
    // int root=sqrt(64);
    // printf("%d",root);

    return 0;
}
