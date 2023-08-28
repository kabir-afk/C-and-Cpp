#include <stdio.h>
// int sum(int x)
// {
//     int s = 0;
//     if (x == 1)
//     {
//         return x;
//     }
//     s = x + sum(x - 1);
//     return s;
// }
// int main()
// {
//     int a = sum(5);
//     printf("%d", a);
// }
int factorial(int x)
{
    if (x == 1 || x == 0)
    {
        return 1;
    }
    else
    {
        int m = x * factorial(x - 1);
        return m;
    }
}
int main()
{
    int a = factorial(5);
    printf("%d", a);
}