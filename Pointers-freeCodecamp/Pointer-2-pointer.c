#include <stdio.h>
int main(){
    int* p;
    int** q=&p;
    int*** r=&q;
    printf("%d \n",*p);
    printf("%d \n",p);
    printf("%d \n",q);
    printf("%d \n",*q);
    printf("%d \n",*r);

    
    return 0;
    }
