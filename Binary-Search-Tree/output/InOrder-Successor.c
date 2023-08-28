#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node* getNewNode(int x) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->left = temp->right = NULL;
    return temp;
}

struct node* insert(struct node* root, int data) {
    if (root == NULL)
        root = getNewNode(data);
    else if (data < root->data)
        root->left = insert(root->left, data);
    else
        root->right = insert(root->right, data);

    return root;
}

struct node* search(struct node* root, int data) {
    if (root == NULL)
        return NULL;
    else if (root->data == data)
        return root;
    else if (data < root->data)
        return search(root->left, data);
    else
        return search(root->right, data);
}

struct node* InOrderSuccessor(struct node* root, int data) {
    // Searching the node
    struct node* current = search(root, data);

    if (current == NULL)
        return NULL;

    // Case 1: Node has a right subtree
    if (current->right != NULL) {
        struct node* temp = current->right;
        while (temp->left != NULL) {
            temp = temp->left;
        }
        return temp;
    }
    // Case 2: Node does not have a right subtree
    else {
        struct node* successor = NULL;
        struct node* ancestor = root;
        while (ancestor != current) {
            if (current->data < ancestor->data) {
                successor = ancestor;
                ancestor = ancestor->left;
            } else {
                ancestor = ancestor->right;
            }
        }
        return successor;
    }
}

int main() {
    struct node* root = NULL;
    root = insert(root, 58);
    root = insert(root, 52);
    root = insert(root, 32);
    root = insert(root, 72);
    root = insert(root, 61);
    root = insert(root, 52);
    root = insert(root, 5);
    
    int n;
    printf("Enter the number you want the inorder successor of: ");
    scanf("%d", &n);
    
    struct node* successor = InOrderSuccessor(root, n);
    if (successor != NULL)
        printf("\nInorder Successor = %d", successor->data);
    else
        printf("\nNo inorder successor found.");
    
    return 0;
}