#include <stdio.h>
#include <string.h>
int main()
{
    // char *str_one;
    char str_one[4] = "abc";
    char str_two[4] = "def";
    // str_one=str_two
    // printf("%s\n", str_one);
    strcpy(str_two, str_one);
    printf("%s\n", str_two);
    //int len = strlen(str_two);
    //printf("%d\n", len);
    return 0;
}
