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

void deleteElement(int pos){
    struct node* temp1 = head;
    
    if(pos == 1){
        head = temp1 -> nextNode;//head now points to (head+1)th node
        free(temp1);
        return;
        
    }
    
    //to point to (n-1)th node
    for(int i = 0;i < pos - 2;i++){
        temp1 = temp1 -> nextNode;
    }
    
    struct node* temp2 = temp1 -> nextNode;//nth node
    temp1 -> nextNode = temp2 -> nextNode;//(n+1)th node
    free(temp2);//delete temp2 from heap memory
}

int main() {
    int n, x,pos;
    
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    
    head = NULL;  // Initialize the head pointer to NULL
    
    for (int i = 0; i < n; i++) {
        printf("Enter your number: ");
        scanf("%d", &x);
        
        insert(x);
        print();
    }
    
    printf("enter the pos of element you want to delete : ");
    scanf("%d",&pos);
    
    deleteElement(pos);
    print();
    
    return 0;
}
