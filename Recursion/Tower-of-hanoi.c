#include <stdio.h>

void TOH(char A,char B,char C,int n){
    if(n>0){
        TOH(A,C,B,n-1);
        printf("moving disks from %c to %c\n",A,C);
        TOH(B,A,C,n-1);
    }
}

int main() {
int n;
printf("enter the number of disks : ");
scanf("%d",&n);
char A = 'A',B = 'B',C = 'C';
TOH(A,B,C,n);
    return 0;
}