#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* getNewNode(int x){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->left = temp->right = NULL;
    return temp;
}

struct node* insert(struct node* root,int data){
    if(root == NULL)//that is when tree is empty
    root = getNewNode(data);
    
    else if(data < root->data)
    root->left = insert(root->left,data);
    
    else
    root->right = insert(root->right,data);
    
    return root;
}
int max_height(int a, int b){
    if(a > b)
    return a;
    else 
    return b;
}

int findHeight(struct node* root){
    if(root == NULL)
    return -1;
    return max_height(findHeight(root->left),findHeight(root->right))+1;
}

int main() {
    
struct node* root = NULL;

root = insert(root,10);
root = insert(root,20);
root = insert(root,30);
root = insert(root,40);
root = insert(root,50);
root = insert(root,92);
root = insert(root,73);
int a = findHeight(root);
printf("height of binary tree is : %d",a);
    return 0;
}