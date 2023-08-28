#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* head;

int main() {
head = NULL;
int arr[] = {1,2,3,4,5};
int n = sizeof(arr)/sizeof(int);
for(int i = 0;i < n;i++){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = arr[i];
    temp -> next = NULL;
    
    struct node* ptr;
    ptr = head;
    
    // when list is empty
    if(head == NULL){
        head = temp;
    }
   else {
            while (ptr->next != NULL) {
                ptr = ptr->next;
            }
            ptr->next = temp;
        }
}

struct node* ptr = head;
while(ptr != NULL){
    printf("%d ",ptr->data);
    ptr = ptr->next;
}

    return 0;
}



