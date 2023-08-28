#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* nextNode;
};

struct node* head;

void insert(int data) {
    struct node* ptr;
    ptr = head;
    
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->nextNode = NULL;
    
    if (head == NULL) {  // If the list is empty, make the new node the head
        head = temp;
        return;
    }
    
    while (ptr->nextNode != NULL) {
        ptr = ptr->nextNode;
    }
    ptr->nextNode = temp;
}

void print() {
    struct node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->nextNode;
    }
    printf("\n");
}

int main() {
    int n, x;
    
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    
    head = NULL;  // Initialize the head pointer to NULL
    
    for (int i = 0; i < n; i++) {
        printf("Enter your number: ");
        scanf("%d", &x);
        
        insert(x);
        print();
    }
    
    return 0;
}
