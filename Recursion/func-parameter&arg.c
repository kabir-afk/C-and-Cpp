#include <stdio.h>
void sum(int a,int b);


void sum(int a,int b){
int sum;
sum=a+b;
printf("sum=%d \n",sum);
}
int main(){
    sum(5,7);
    return 0;
}