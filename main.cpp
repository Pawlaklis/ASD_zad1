#include <iostream>
#include "Array_class.h"
#include "Array_class.h"
#include "BST_tree_class.h"
#include "tree_class.h"

int main() {
    BST Tree;

    Tree.insert_element(4);
    Tree.insert_element(2);
    Tree.insert_element(1);
    Tree.insert_element(3);
    Tree.insert_element(6);
    Tree.insert_element(5);
    Tree.insert_element(7);

    Tree.delete_element(4);

    Tree.inorder(Tree.root);



    return 0;
}
