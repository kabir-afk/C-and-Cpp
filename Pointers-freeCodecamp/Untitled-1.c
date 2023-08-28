#include <stdio.h>
int main(){
    int x=5;
    int *p;
    p=&x;
    *p=6;
    int *q=&p;
    printf("%d \n",p);
    printf("%d \n",*p);
    printf("%d \n",*q);
    
    
    return 0;
    }
