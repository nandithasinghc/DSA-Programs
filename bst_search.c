#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int value) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
};

struct Node* insert(struct Node* root, int value) {
    if (root == NULL) {
        return createNode(value);
    }
    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }
    return root;
}

bool search(struct Node* root, int target) {
    if (root == NULL) {
        return false;
    }
    if (root->data == target) {
        return true;
    }
    if (target < root->data) {
        return search(root->left, target);
    }
    return search(root->right, target);
}

int main() {
    struct Node* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    int target = 60;
    if (search(root, target)) {
        printf("Element %d found\n", target);
    } else {
        printf("Element %d not found\n", target);
    }

    return 0;
}
