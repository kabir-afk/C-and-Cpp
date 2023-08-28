// Binary tree --> Level order traversal
#include <iostream>
#include <queue>
using namespace std;

struct node{
    char data;
    node* left;
    node* right;
};

void levelOrder(node* root){
    if(root == NULL)
    return;
    
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node* current = q.front();
        cout<<current->data<<" ";
        if(current->left != NULL)q.push(current->left);
        if(current->right != NULL)q.push(current->right);
        q.pop();//removing the element at front
    }
}

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


int main() {
struct node* root = NULL;
root = insert(root,'F');
root = insert(root,'D');
root = insert(root,'J');
root = insert(root,'B');
root = insert(root,'E');
root = insert(root,'G');
root = insert(root,'K');

levelOrder(root);

    return 0;
}