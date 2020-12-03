#ifndef ASD_ZAD1_BST_TREE_CLASS_H
#define ASD_ZAD1_BST_TREE_CLASS_H
#include "tree_class.h"

class BST:public tree_class{
public:

    Node* minValueNode(Node*);

    Node* insert_element(Node*, int);
    void insert_element(int);
    Node* delete_element(Node*, int);
    void delete_element(int);







};



#endif //ASD_ZAD1_BST_TREE_CLASS_H
