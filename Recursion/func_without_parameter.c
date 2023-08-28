#include <stdio.h>

int sum();
int main(){
    sum();
    return 0;
}
int sum(){
    int a,b;
    printf("enter first number \n");
    scanf("%d",&a);
    printf("enter second number \n");
    scanf("%d",&b);
    int sum=a+b;
    printf("sum=%d",sum);
}
