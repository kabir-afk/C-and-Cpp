#include <stdio.h>
#include <stdlib.h>
struct student{
    char name[20];
    int rollnum;
    int marks[5];
};
int main() {
    struct student s[5];
    for(int i = 0;i < 2;i++){
        printf("enter name of %d student : ",i+1);
        scanf("%s",s[i].name);
        printf("enter roll number of %d student : ",i+1);
        scanf("%d",&s[i].rollnum);
        for (int j = 0; j < 5; j++) {
            printf("Enter the marks of subject %d for student %d: ", j + 1, i + 1);
            scanf("%d", &s[i].marks[j]);
        }

    }
    printf("\n");
    for(int i = 0;i < 2;i++){
        printf("\n");
        printf("name of %d student is : %s \n",i+1,s[i].name);
        printf("roll number of %d student : %d",i+1,s[i].rollnum);
        printf("\nMarks: ");
        for (int j = 0; j < 5; j++) {
            printf("%d ", s[i].marks[j]);
        }
        printf("\n");
    }
    return 0;
}
