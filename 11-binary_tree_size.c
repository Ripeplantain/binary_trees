#include "binary_trees.h"
/**
 * binary_tree_insert_left - A function that inserts a node as the left-child.
 * @parent: A pointer to a node to insert the left child in.
 * @value: The value to store in the node.
 * Return: A pointer to to created node or NULL on failure.
 */
 size_t binary_tree_size(const binary_tree_t *tree)
 {
    size_t size = 1;

    if (!tree)
        return (0);

    size += binary_tree_size(tree->left);
    size += binary_tree_size(tree->right);

    return (size);    
 }