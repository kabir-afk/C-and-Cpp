#include <stdio.h>
int sumofelements(int a[]);

int sumofelements(int a[]){
    int i,sum=0;
    for ( i = 0; i < 5; i++)
    {
        sum+=a[i];
    }
    return sum;
}
int main(){
    int i,a[5];
    for ( i = 0; i < 5; i++)
    {
    printf("enter number:");
    scanf("%d",&a[i]);
    }
    int total=sumofelements(a);
    printf("sum of elements=%d",total);
    return 0;
}