#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* link;
};
struct node* head;//declaring globally, so that it can be accessed anywhere
void insert(int x){
   struct node* temp = (struct node*)malloc(sizeof(struct node));
    // (*temp).data = x;
    temp->data = x;
    temp->link = head;
    head = temp;
}
void print(){
    struct node* temp = head;
    printf("List is: ");
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->link;
    }
    printf("\n");
}
int main() {
int n,x;
printf("how many numbers : \n");
scanf("%d",&n);
for(int i = 0;i < n;i++){
    printf("enter your number \n");
    scanf("%d",&x);
    insert(x);
    print();
}
    return 0;
}