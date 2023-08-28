#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* head;

void insert(int x,int pos){
    struct node* temp1 = (struct node*)malloc(sizeof(struct node));
    temp1->data = x;
    temp1->next = NULL;
    
    struct node* temp2;
    temp2 = head;
    
    if(pos==1){
        temp1->next = head;
        head = temp1;
        return;
    }
    
    for(int i = 0;i < pos-2;i++){
        temp2 = temp2 -> next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}

void print(struct node* p){
   if(p == NULL){
        printf("\n");
        return;
    }
    printf("%d ",p->data);
    print(p->next);
}

void reverse(struct node* p){
    if(p->next==NULL){
        head = p;
        return;
    }
    reverse(p->next);
    
    struct node*q = p->next;
    q->next = p;
    // the above 2 statemnets can be written this way as well:-
    // p->next->next = p;
    p->next = NULL;
}

int main() {
int n,x,a;
printf("enter how many numbers you want to insert in linked list\n");
scanf("%d",&n);
head = NULL;
for(int i = 0;i < n;i++){
    printf("enter your number : ");
    scanf("%d",&x);
    
    printf("enter the position you want your number at : ");
    scanf("%d",&a);
    
    insert(x,a);
}
print(head);
reverse(head);
print(head);
    return 0;
}