#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* head;

struct node* reverse(struct node* head){
    struct node *current,*prev,*next;
    current = head;
    prev = NULL;
    while(current != NULL){
        next = current -> next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}

int main() {
int arr[] = {95,96,97,98,99,100};
int n = sizeof(arr)/sizeof(int);
head = NULL;
for(int i = 0;i < n;i++){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = arr[i];
    temp->next = NULL;
    
    struct node* ptr = head;
    
    if(head == NULL){
        head = temp;
    }
    else{
        while(ptr->next != NULL){
            ptr = ptr -> next;
        }
        ptr->next = temp;
    }
}
struct node* ptr = head;
printf("Forward linked list \n");
while(ptr != NULL){
    printf("%d ",ptr->data);
    ptr = ptr -> next;
}

head = reverse(head);
printf("\n\nReversed linked list \n");
while(head != NULL){
    printf("%d ",head->data);
    head = head -> next;
}

    return 0;
}