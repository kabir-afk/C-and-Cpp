#include <stdio.h>
struct student
{
    int rollno;
    char name[20];
    float marks;
};
int main()
{
    // struct student s;
    // printf("Enter roll-no.\n");
    // scanf("%d",&s.rollno);
    // printf("roll no =%d",s.rollno);
    // printf("Enter name\n");
    // scanf("%s",&s.name);
    // printf("name =%s",s.name);
    
    // struct student s[3];
    // for (int i = 1; i < 4; i++)
    // {
    //     printf("student %d's roll no:", i);
    //     scanf("%d", &s[i].rollno);
    //     printf("student %d's name: ", i);
    //     scanf("%s", &s[i].name);
    //     printf("student %d's marks:", i);
    //     scanf("%f", &s[i].marks);
    // }
    struct student s={15,"kabir",92};
    struct student* ptr=&s;
    printf("%s with roll no %d scored %f marks",ptr->name,ptr->rollno,ptr->marks);
}