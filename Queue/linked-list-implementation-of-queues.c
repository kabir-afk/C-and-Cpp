// Linked list implementation of queues
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* front = NULL;
struct node* rear = NULL;

void enqueue(int x){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;
    
    if(front == NULL && rear == NULL){
        front = rear = temp;
        return;
    }
    rear->next = temp;
    rear = temp;
}

void dequeue(){
    struct node* temp = front;
    if(front == NULL)
    return;
    if(front == rear){
        front = rear = NULL;
    }
    else{
        front = front -> next;
    }
    free(temp);
}

void print(){
    struct node* temp = front;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

int main() {
enqueue(2);
enqueue(4);
enqueue(7);
enqueue(10);
enqueue(-4);
dequeue();
print();
    return 0;
}