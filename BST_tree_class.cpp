#include "BST_tree_class.h"

Node * BST::insert_element(Node* root, int k) {
    if(root == nullptr){
        root = new Node(k);
    } else if(k < root->value)
        root->left = insert_element(root->left, k);
    else if(k > root->value)
        root->right = insert_element(root->right, k);
    return root;
}

Node * BST::delete_element(Node* root, int k) {
    if(root == nullptr){
        return root;
    } else if(k < root->value)
        root->left = delete_element(root->left, k);
    else if(k > root->value)
        root->right = delete_element(root->right, k);
    else{
        if (root->left == nullptr) {
            struct Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == nullptr) {
            struct Node* temp = root->left;
            delete root;
            return temp;
        }

        struct Node* temp = minValueNode(root->right);

        root->value = temp->value;

        root->right = delete_element(root->right, temp->value);
    }
    return root;
}

Node* BST::minValueNode(Node * root) {
    while (root && root->left != nullptr)
        root = root->left;
    return root;
}


void BST::insert_element(int k) {
    root = insert_element(root, k);
}

void BST::delete_element(int k) {
    root = delete_element(root, k);
}