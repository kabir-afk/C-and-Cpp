// Tree
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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
    if(root == NULL){
        root = getNewNode(data);
    }
    else if(root->data > data){
        root->left =  insert(root->left,data);
    }
    else{
        root->right = insert(root->right,data);    
    }
    
    return root;
}

struct node* findMin(struct node* root){
    if(root == NULL){
        printf("Error : Tree is empty :/\n");
    }
    else if(root->left == NULL){
        return root->data;
    }
    return findMin(root->left);
}
struct node* findMax(struct node* root){
    if(root == NULL){
        printf("Error : Tree is empty :/\n");
    }
    else if(root->right == NULL){
        return root->data;
    }
    return findMax(root->right);
}

int main() {
    struct node* root = NULL;
    root = insert(root,15);
    root = insert(root,10);
    root = insert(root,23);
    root = insert(root,25);
    root = insert(root,12);
    root = insert(root,30);
    int a = findMin(root);
    int b = findMax(root);
    printf("Min element on tree is : %d\nMax element on tree is : %d",a,b);
    return 0;
}