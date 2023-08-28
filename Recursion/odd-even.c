#include <stdio.h>
int number(int);

int number(int x)
{
    if ((x % 2) == 0)
    {
        printf("%d is even", x);
    }
    else
    {
        printf("%d is odd", x);
    }
}
int main()
{
    int a;
    printf("enter a number:");
    scanf("%d", &a);
    number(a);
}
