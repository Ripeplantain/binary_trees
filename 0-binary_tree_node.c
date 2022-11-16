#include "binary_trees.h"
/**
 * binary_tree_node - Write a function that creates a binary tree node
 * @parent: this pointer parent binary trees
 * @value: this value new node
 * Return: new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *newnode;

    if (value == '\0')
        return (NULL);
    newnode = (binary_tree_t *) malloc(sizeof(binary_tree_t));
    newnode->parent = parent;
    newnode->n = value;
    newnode->left = NULL;
    newnode->right = NULL;
    return (newnode);     
}