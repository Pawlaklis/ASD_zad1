#ifndef ASD_ZAD1_TREE_CLASS_H
#define ASD_ZAD1_TREE_CLASS_H

struct Node{
public:
    int value;
    Node* left;
    Node* right;
    Node(int);
};

class tree_class {
public:
    Node* root;

    tree_class();
    ~tree_class();

    void inorder(Node*);
    void preorder(Node *);
    void postorder(Node *);
};


#endif //ASD_ZAD1_TREE_CLASS_H
