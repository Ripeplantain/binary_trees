#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent,int value)
{
    binary_tree_t *newnode;

    if(value == '\0')
        return NULL;

    newnode = (binary_tree_t *) malloc(sizeof(binary_tree_t));
    newnode->parent = parent;
    newnode->n = value;
    newnode->left = NULL;
    newnode->right = NULL;

    return (newnode);     
}