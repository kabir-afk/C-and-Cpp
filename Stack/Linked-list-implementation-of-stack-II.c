// Implementation of linked lists using linked lists
// THIS IMPLEMENTATION RELIES ON THE FACT THAT TOP OF THE STACK IS HEAD NODE OF THE LINKED LIST
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* head;

void push(){
    int x;
    printf("enter an element : ");
    scanf("%d",&x);
    
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = head;
    head = temp;
}

void pop(){
    if(head == NULL){
        printf("Error : no element to pop\n");
        return;
    }
    struct node* temp = head;
    head = temp->next;
    free(temp);
}
void peek(){
    struct node* temp = head;
    printf("Top element : %d\n",temp->data);
}
void print(){
    struct node* temp = head;
    printf("Stack is : ");
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main() {
head = NULL;
int a = 0;
    while(a!=5){
        printf("Choose one of the options from the list:-\n");
        int choice;
        printf("1. Push an element\n2. Pop \n3. Peek \n4. Print stack\n5. Exit \n");
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
            default:
            printf("Enter valid choice\n");
        }
    }

    return 0;
}