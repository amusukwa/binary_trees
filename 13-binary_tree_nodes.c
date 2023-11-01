#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - Count the number of nodes with at least one child
 * @tree: Pointer to the root node of the tree
 * Return: The number of nodes with at least one child in the tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}
size_t count = 0;
if (tree->left != NULL || tree->right != NULL)
{
count = 1;
}
count += binary_tree_nodes(tree->left);
count += binary_tree_nodes(tree->right);
return (count);
}
