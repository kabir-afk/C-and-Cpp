#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* head;

void add_at_first(){
    int first;
    printf("\nenter the number you want at first position : ");
    scanf("%d",&first);
    
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = first;
    temp -> next = head;
    head = temp;
    
    //when list is empty
    if(head == NULL){
        head = temp;
    }
}

void add_at_last(){
    int last;
    printf("\nenter the number you want at last position : ");
    scanf("%d",&last);
    
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = last;
    temp -> next = NULL;
    
    struct node* ptr;
    ptr = head;
    
    // when list is empty
    if(head == NULL){
        head = temp;
        return;
    }
    
    while(ptr->next != NULL){
        ptr = ptr -> next;
    }
    ptr->next = temp;
}

void add_at_nth(){
    int n,pos;
    printf("\nenter the number you want at nth position : ");
    scanf("%d",&n);
    
    printf("\nenter the position you want your number at : ");
    scanf("%d",&pos);
    
    struct node* temp1 = (struct node*)malloc(sizeof(struct node));
    temp1->data = n;
    temp1->next = NULL;
    
    struct node* temp2 = head;
    //to access (n-1)th node
    for(int i = 0;i < pos - 2;i++){
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}

void del_at_first(){
    struct node* temp = head;
    head = temp->next;
    free(temp);
}

void del_at_last() {
    if (head == NULL) {
        // List is empty, nothing to delete
        return;
    }

    if (head->next == NULL) {
        // Only one element left, delete it
        free(head);
        head = NULL;
        return;
    }

    struct node* temp1 = head;
    struct node* temp2 = head;
    while (temp1->next != NULL) {
        temp2 = temp1;
        temp1 = temp1->next;
    }
    temp2->next = NULL;
    free(temp1);
    temp1 = NULL;
}

void del_at_nth(){
    int pos;
    printf("enter the position you want to delete the element at : ");
    scanf("%d",&pos);
    
    struct node* temp1 = head;
    for(int i = 0;i < pos - 2;i++){
        temp1 = temp1 -> next;
    }
    struct node* temp2 = temp1->next;//to access nth node
    temp1->next = temp2->next;
    free(temp2);
}

void search(){
    int element;
    printf("enter the element you want to search for : ");
    scanf("%d",&element);
    
    struct node* temp = head;
    while(temp != NULL){
        if(temp->data == element){
            printf("element is present");
            return;
        }
        temp = temp -> next;
    }
    printf("element is not present");
}

void display(){
    struct node* temp = head;
    printf("List is : ");
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    head = NULL;
    int choice = 0;
    while(choice != 9){
        printf("\nchoose one option from the following list :- \n");
        printf("\n 1. Insert at beginning\n 2. Insert at last position \n 3. Insert at nth position\n 4. Delete at beginning\n 5. Delete at last position \n 6. Delete at nth position\n 7. Search\n 8. Display\n 9. Exit\n");
        printf("\nenter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            add_at_first();
            break;
            
            case 2:
            add_at_last();
            break;
            
            case 3:
            add_at_nth();
            break;
            
            case 4:
            del_at_first();
            break;
            
            case 5:
            del_at_last();
            break;
             
            case 6:
            del_at_nth(); 
            break;
            
            case 7:
            search();
            break;
            
            case 8:
            display();
            break;
            
            case 9:
            exit(0);
            
            default:
            printf("wrong choice");
        }
    }
    return 0;
}