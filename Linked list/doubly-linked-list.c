#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* prev;
    struct node* next;
};

struct node* head;

struct node* getNewnode(int x) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->prev = NULL;
    temp->next = NULL;

    return temp;
}

void insert(int x) {
    struct node* temp = getNewnode(x);
    if (head == NULL) {
        head = temp;
        return;
    }
    head->prev = temp;
    temp->next = head;
    head = temp;
}

void print() {
    struct node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void reversePrint() {
    struct node* temp = head;
    if (temp == NULL) {
        return;
    }

    while (temp->next != NULL) {
        temp = temp->next;
    }

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    printf("\n");
}

int main() {
    insert(3);
    print();
    insert(5);
    print();
    insert(1);
    print();
    insert(4);
    print();
    reversePrint();
    return 0;
}
