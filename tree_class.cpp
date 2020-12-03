#include "tree_class.h"
#include <iostream>

Node::Node(int k){
    value = k;
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