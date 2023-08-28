#include <stdio.h>
#include <string.h>
int main(){
    /*char c[5]="john";
    printf("%s\n",c);
    int len=strlen(c);
    printf("length of the string=%d \n",len);
    printf("size of string=%d \n",sizeof(c));
    char a;
    char* b;
    printf("size of character=%d bytes \n",sizeof(a));
    printf("size of pointer to character=%d bytes \n",sizeof(b));
    return 0;*/
char c1[6]="hello";
char* c2;
c2=c1;
c2[0]='s';
printf("%s",c2);
}