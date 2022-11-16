#include "binary_trees.h"
/**
 * binary_tree_insert_left - A function that inserts a node as the left-child.
 * @parent: A pointer to a node to insert the left child in.
 * @value: The value to store in the node.
 * Return: A pointer to to created node or NULL on failure.
 */
 int binary_tree_is_leaf(const binary_tree_t *node)
 {
    if (node == NULL)
    {
        return (0);
    }

    if (!node->parent)
        return (1);
    return (0);    
 }