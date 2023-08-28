#include <stdio.h>
#include <stdlib.h>

struct node{
    char data;
    struct node* left;
    struct node* right;
};

struct node* getNewNode(char x){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->left = temp->right = NULL;
    return temp;
}

struct node* insert(struct node* root,char data){
    if(root == NULL)//when BST is empty
    root = getNewNode(data);
    
    else if(data  < root->data )
    root->left = insert(root->left,data);
    
    else if(data  > root->data )
    root->right = insert(root->right,data);
    
    return root;
}

//DLR-->DATA - LEFT - RIGHT
void PreOrder(struct node* root){
    if(root==NULL)
    return;
    
    printf("%c ",root->data);
    PreOrder(root->left);
    PreOrder(root->right);
}

//LDR-->LEFT - DATA - RIGHT
//INORDER TRAVERSAL SORTS THE ELEMENTS OF TREE IN A NON-DECREASING/INCREASING ORDER, HENCE INORDER TRAVERSAL
void InOrder(struct node* root){
    if(root==NULL)
    return;
    
    InOrder(root->left);
    printf("%c ",root->data);
    InOrder(root->right);
}

//LRD-->LEFT - RIGHT - DATA 
void PostOrder(struct node* root){
    if(root==NULL)
    return;
    
    PostOrder(root->left);
    PostOrder(root->right);
    printf("%c ",root->data);
}

int main() {
struct node* root = NULL;
root = insert(root,'F');
root = insert(root,'D');
root = insert(root,'J');
root = insert(root,'B');
root = insert(root,'E');
root = insert(root,'G');
root = insert(root,'K');

PreOrder(root);
printf("\n");
InOrder(root);
printf("\n");
PostOrder(root);

    return 0;
}