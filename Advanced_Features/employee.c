#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
struct employee{
    char name[20];
    int employee_ID;
    char department[20];
    float salary;
};
int main() {
    struct employee emp[3];
    float max = INT_MIN;
    float min = INT_MAX;
    float avg = 0;
    for(int i = 0;i < 3;i++){
        printf("\n");
        printf("enter employee's name : ");
        scanf("%s",emp[i].name);
        printf("enter employee's ID : ");
        scanf("%d",&emp[i].employee_ID);
        printf("enter employee's department : ");
        scanf("%s",&emp[i].department);
        printf("enter salary : ");
        scanf("%f",&emp[i].salary);
        if(emp[i].salary > max){
            max = emp[i].salary;
        }
        if(emp[i].salary < min){
            min = emp[i].salary;
        }
        avg = avg + emp[i].salary;
    }
    printf("avg of the salary of employess is \n : %f",avg/3);
    printf("highest salary among employees is \n : %f",max);
    printf("lowest salary among employees is  \n: %f",min);
    return 0;
}