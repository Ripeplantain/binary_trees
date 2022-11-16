#include "binary_trees.h"
/**
 * binary_tree_insert_left - A function that inserts a node as the left-child.
 * @parent: A pointer to a node to insert the left child in.
 * @value: The value to store in the node.
 * Return: A pointer to to created node or NULL on failure.
 */
 size_t binary_tree_depth(const binary_tree_t *tree)
 {
    size_t depth = 0;

    if (tree == NULL)
    {
        return (0);
    }

    depth += 1 + binary_tree_depth(tree->root);
      
 }