#include "binary_trees.h"
/**
 * binary_tree_insert_left - A function that inserts a node as the left-child.
 * @parent: A pointer to a node to insert the left child in.
 * @value: The value to store in the node.
 * Return: A pointer to to created node or NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

    if(parent == NULL || value == '\0')
    {
        return (NULL);
    }

    newnode = (binary_tree_t *) malloc(sizeof(binary_tree_t));
    
    if (newnode == NULL)
    {
        return (NULL);
    }

    newnode->parent = parent;
    newnode->n = value;
    newnode->left = NULL;
    newnode->right = NULL;

    if (parent->left != NULL)
    {
        newnode->left = parent->left;
        newnode->left->parent = newnode;
    }
    parent->left = newnode;

    return (newnode);
}