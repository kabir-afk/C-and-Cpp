// similar to loop
#include <stdio.h>
// int f(int a);
// int f(int a)
// {
//     if (a <= 1)
//     {
//         return 1;
//     }
//     else
//     {
//         printf("%d ", a);
//         f(a / 2);
//     }
// }
// int main(){
//     printf("%d",f(10));
// }
int main(){
    int a=100;
    for (int i = 0; i < 10; i++)
    {
        if (a==0)
        {
            break;
        }
        printf("%d ",a);
        a/=2;
    }
    
}