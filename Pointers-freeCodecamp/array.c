#include <stdio.h>
int main(){
  int arr[5],i;
    for (i=0;i<5;i++)
    {
        printf("enter [%d]:",i);
        scanf("%d",&arr[i]);
    }
    printf("printing elements of the array: \n");
    for (i=0;i<5;i++);
    {
        printf("%d",arr[i]);
    }
    return 0;
}
