#include <stdio.h>
struct rectangle{
    float length;
    float breadth;
};
int main() {
    struct rectangle r;
    printf("enter length : ");
    scanf("%f",&r.length);
    printf("enter breadth : ");
    scanf("%f",&r.breadth);
    printf("\nperimeter of the rect is : %f",2*(r.length + r.breadth));
    printf("\narea of the rect is : %f",r.length * r.breadth);
    return 0;
}