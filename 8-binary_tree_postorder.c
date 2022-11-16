#include "binary_trees.h"
/**
 * binary_tree_insert_left - A function that inserts a node as the left-child.
 * @parent: A pointer to a node to insert the left child in.
 * @value: The value to store in the node.
 * Return: A pointer to to created node or NULL on failure.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
    {
        return; 
    }
    binary_tree_postorder(tree->right, func);
    binary_tree_postorder(tree->left, func);
    func(tree->n);
}