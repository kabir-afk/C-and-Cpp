// inserting a node at nth position
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* nextNode;
};

struct node* head;

void insert(int n,int pos){
    struct node* temp1 = (struct node*)malloc(sizeof(struct node));
    temp1->data = n;
    temp1->nextNode = NULL;
    if(pos==1){
        temp1->nextNode = head;
        head = temp1;
        return;
    }
    struct node* temp2 = (struct node*)malloc(sizeof(struct node));
    temp2 = head;
    for(int i = 0;i < pos-2;i++){
        temp2 = temp2->nextNode;
    }
    temp1->nextNode = temp2->nextNode;
    temp2->nextNode = temp1;
}

void print(){
    struct node* temp = head;
    printf("List is: ");
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->nextNode;
    }
    printf("\n");
}

int main() {
int n,pos,nums;

printf("enter how many numbers : ");
scanf("%d",&nums);
for(int i = 0;i < nums;i++){
    
    printf("enter a number \n");
    scanf("%d",&n);
    
    printf("enter the position \n");
    scanf("%d",&pos);

    insert(n,pos);
    print();
    
}
    return 0;
}