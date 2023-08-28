#include <stdio.h>
int main(){
    int A[] ={2,3,4,5,6};
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("address=%d \n",&A[i]);
        printf("address=%d \n",A+i);
        printf("address=%d \n",A[i]);
        printf("address=%d \n",*(A+i));
    }
    
}