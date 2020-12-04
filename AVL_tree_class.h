#ifndef ASD_ZAD1_AVL_TREE_CLASS_H
#define ASD_ZAD1_AVL_TREE_CLASS_H
#include "tree_class.h"

class AVL:public tree_class{
public:

    int Height(Node* );
    Node* minValueNode(Node*);
    int maxHeight(Node*, Node*);
    Node* insert_element(Node*, int);
    void insert_element(int);
    Node* delete_element(Node*, int);
    void delete_element(int);
    Node *leftRotate(Node*);
    Node *rightRotate(Node*);
};



#endif //ASD_ZAD1_AVL_TREE_CLASS_H
