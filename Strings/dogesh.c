#include <stdio.h>
#include <string.h>

char * toLowerCase(char * s){
strlwr(s);
return s;
}
int main(){
    char string[]="HAFVQWHbcuebIWB";
    char* a=toLowerCase(string);
    printf("%s",a);
}