//Binary Search Trees  
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

struct node* insert(struct node* root , int data){
    //when the tree is empty
    if(root == NULL){
        root  = getNewNode(data);
    }
    else if(root->data < data){
        root->left = insert(root->left,data);
    }
    else{
        root->right = insert(root->right,data);
    }
    return root;
}

bool search(struct node* root,int data){
    if(root == NULL)
    return false;
    else if(root->data == data)
    return true;
    else if(root->data <= data)
    return search(root->left,data);
    else
    return search(root->right,data);
}

int main() {
    
    struct node* root = NULL;
    root = insert(root,15);
    root = insert(root,10);
    root = insert(root,20);
    root = insert(root,25);
    root = insert(root,12);
    root = insert(root,30);
    root = insert(root,11);
    int data;
    printf("enter the number you want to search in tree : ");
    scanf("%d",&data);
    if(search(root,data)==true){
        printf("Found\n");
    }
    else{
        printf("Not Found\n");
    }
    return 0;
}