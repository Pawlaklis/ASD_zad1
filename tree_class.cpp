#include "tree_class.h"
#include <iostream>

Node::Node(int k){
    value = k;
    height = 1;
    left = nullptr;
    right = nullptr;
}

tree_class::tree_class() {
    root = nullptr;
}

tree_class::~tree_class() {
    delete root->right;
    delete root->left;
    delete root;
}

void tree_class::inorder(Node * root) {
    if (root != nullptr) {
        inorder(root->left);
        std::cout << root->value << " ";
        inorder(root->right);
    }
}

void tree_class::preorder(Node * root) {
    if (root != nullptr)
        return;
    std::cout << root->value << " ";
    preorder(root->left);
    preorder(root->right);
}

void tree_class::postorder(Node *) {
    if (root != nullptr)
        return;
    preorder(root->left);
    preorder(root->right);
    std::cout << root->value << " ";
}
