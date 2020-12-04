#include <iostream>
#include "BST_tree_class.h"
#include "AVL_tree_class.h"

int main() {
    AVL Tree;

    Tree.insert_element(4);
    Tree.insert_element(3);
    Tree.insert_element(2);

    Tree.inorder(Tree.root);



    return 0;
}
