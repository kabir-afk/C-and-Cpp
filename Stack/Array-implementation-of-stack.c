// Array implementation of stack
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int arr[SIZE];
int top = -1;

void push(){
    int x;
    printf("enter an element : ");
    scanf("%d",&x);
    if(top == SIZE - 1){
        printf("Error : stack overflow\n");
    }
    else{
        top++;
        arr[top] = x;
    }
}

void pop(){
    if(top == - 1){
        printf("Error : no element to pop\n");
    }
    else{
        top--;
    }
}

int peek(){
    printf("Top element is : %d\n",arr[top]);
    return 0;
}

void print(){
    printf("Stack : ");
    for(int i = 0;i <= top;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main() {
    int a = 0;
    while(a!=5){
        printf("Choose one of the options from the list:-\n");
        int choice;
        printf("1. Push\n2. Pop\n3. Peek\n4. Print stack\n5. Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1: 
            push();
            break;
            case 2: 
            pop();
            break;
            case 3: 
            peek();
            break;
            case 4: 
            print();
            break;
            case 5: 
            exit(0);
            break;
            default:
            printf("Enter valid choice\n");
            break;
        }
    }

    return 0;
}