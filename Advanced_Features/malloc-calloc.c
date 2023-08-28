#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("enter the size of array:\n");
    scanf("%d", &n);
    int *A = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        A[i] = i + 1;
    }
    int *B = (int *)realloc(NULL, n * sizeof(int)); // equivalent to malloc,no data copied,new memory block created
    // printf("%d %d\n", A, B);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", B[i]);
    }
}
