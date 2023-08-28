#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* prev;
    struct node* next;
};

struct node* head;

struct node* getNewnode(int x){
struct node* temp = (struct node*)malloc(sizeof(struct node));    temp->data = x;
    temp->prev = NULL;
    temp->next = NULL;
    
    return temp;
}

void insertAthead(int x){
    struct node* newNode = getNewnode(x);
    if(head == NULL){
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}

void print(){
    struct node* temp = head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp -> next;
    }
}

int main() {
    int n,x;
    printf("enter how many numbers you want\n");
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        printf("enter your number : ");
        scanf("%d",&x);
        insertAthead(x);
    }
    print();
    return 0;
}