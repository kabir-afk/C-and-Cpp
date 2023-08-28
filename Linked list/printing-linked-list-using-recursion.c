#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* head;

void insert(int x){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;
    
    struct node* ptr = head;
    
    if(head == NULL){
        head = temp;
        return;
    }
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = temp;
}

void print(struct node* p){
    if(p == NULL){    
        printf("\n");
        return;
    }
    printf("%d ",p->data);
    print(p->next);
    p = p->next;
}

void reversePrint(struct node* r){
    if(r == NULL){        
        printf("\n");
        return;
    }
    reversePrint(r->next);
    printf("%d ",r->data);
    r = r->next;
}

int main() {
    int n,x;
    printf("enter how many numbers you want to enter\n");
    scanf("%d",&n);
    head = NULL;
    for(int i = 0;i < n;i++){
        printf("enter your number : ");
        scanf("%d",&x);
        insert(x);
    }
    print(head);
    reversePrint(head);

    return 0;
}