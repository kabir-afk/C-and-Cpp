#include <stdio.h>
int main(){
int a;
int *p;
a=5;
p=&a;
printf("%d \n",p);
printf("size of pointer is %d bytes \n",sizeof(int));
printf("%d \n",p+1);
char *p0;
p0=(char*)p; //typecasting
printf("%d \n",p0);
printf("size of char pointer is %d bytes \n",sizeof(char));
printf("%d \n",p0+1);

return 0;
}