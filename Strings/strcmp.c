#include <stdio.h>
#include <string.h>
int main()
{
    char name1[10]="KAABIRA";
    char name2[10]="singh";
    strlwr(name1);
    strupr(name2);
    //strcat(name1,name2);
    strset(name2,'6');
    strnset(name2,'x',2);
    strncat(name1,name2,3);
    printf("%s\n",name1);
    char name[10];
    printf("enter name:");
    scanf("%s",&name);
    strrev(name);
    printf("%s",name);
    return 0;
}