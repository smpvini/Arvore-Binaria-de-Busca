#ifndef ARVORE_BINARIA_H
#define ARVORE_BINARIA_H

#include <stdio.h>

struct TreeNode {
    int key;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* createNode(int key);
struct TreeNode* insert(struct TreeNode* root, int key);
struct TreeNode* removeNode(struct TreeNode* root, int key);
struct TreeNode* findMin(struct TreeNode* root);
struct TreeNode* findMax(struct TreeNode* root);
struct TreeNode* search(struct TreeNode* root, int key);
void inorder(struct TreeNode* root);
void preorder(struct TreeNode* root);
void postorder(struct TreeNode* root);
void freeTree(struct TreeNode* root);

#endif
