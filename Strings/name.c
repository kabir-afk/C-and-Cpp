#include <stdio.h>
#include <string.h>
int main()
{
    char name[20];
    char o[] = " ";
    printf("enter your name:");
    scanf("%s", &name);
    char *p = strstr(name, o);
    //printf("first name:%s", a);
    printf("last name:%s", p);
    return 0;
}
