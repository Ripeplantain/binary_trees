#include "binary_trees.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *newnode;

    if (parent == NULL || value == '\0')
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

    if (newnode->right != NULL)
    {
        newnode->right = parent->right;
        newnode->right->parent = newnode;
    }
    parent->right = newnode;

    return (newnode);
}
