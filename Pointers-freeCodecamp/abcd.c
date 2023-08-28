#include <stdio.h>
#include <string.h>
char function(char* c)
{
    int i = 0;
    while (c[i] != '\0')
    {
        printf("%c", c[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    char c[20] = "hello world";
    function(c);
}