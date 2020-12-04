#include "AVL_tree_class.h"
#include <iostream>

int AVL::maxHeight(Node *a, Node *b){
    if(Height(a) > Height(b))
        return Height(a);
    return Height(b);
}

int AVL::Height(Node *root) {
    if (root == nullptr)
        return 0;
    return root->height;
}


Node *AVL::insert_element(Node *root, int k) {
    if (root == nullptr) {
        root = new Node(k);
    }
    if (k < root->value)
        root->left = insert_element(root->left, k);
    else if (k > root->value)
        root->right = insert_element(root->right, k);
    else
        return root;

    root->height = 1 + maxHeight(root->left, root->right);

    int balance = 0;

    if(root != nullptr)
        balance = Height(root->left) - Height(root->right);
    std::cout << balance  << " : " << root->value << std::endl;
    if (balance > 1 && k < root->left->value)
        return rightRotate(root);

    if (balance < -1 && k > root->right->value)
        return leftRotate(root);

    if (balance > 1 && k > root->left->value)
    {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    if (balance < -1 && k < root->right->value)
    {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}

void AVL::insert_element(int k) {
    root = insert_element(root, k);
}

Node *AVL::delete_element(Node *root, int k) {
    return nullptr;
}

void AVL::delete_element(int k) {

}

Node *AVL::leftRotate(Node *x) {
    Node *y = x->right;
    Node *T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = 1 + maxHeight(x->left, x->right);
    y->height = 1 + maxHeight(y->left, y->right);

    return y;
}

Node *AVL::rightRotate(Node *y) {
    Node *x = y->left;
    Node *T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = 1 + maxHeight(y->left, y->right);
    x->height = 1 + maxHeight(x->left, x->right);

    // Return new root
    return x;
}

Node *AVL::minValueNode(Node *) {
    return nullptr;
}
