#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

union student
{
    int rollno;
    float marks;
    double cgpa;
};
int main()
{
    union student s;
    s.rollno=15;
    s.marks=51;
    s.cgpa=9.2;
    printf("%d\n",s.rollno);
    printf("%f\n",s.marks);
    printf("%f\n",s.cgpa);
    return 0;
}