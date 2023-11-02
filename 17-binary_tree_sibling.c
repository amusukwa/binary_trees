#include <stddef.h>
#include "binary_trees.h"


/**
 * binary_tree_sibling - Find the sibling of a node in a binary tree
 * @node: Pointer to the node to find the sibling
 *
 * Return: Pointer to the sibling node or NULL if no sibling exists.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

if (node == NULL || node->parent == NULL)
{
return (NULL);
}

binary_tree_t *parent = node->parent;
if (parent->left == node)
{
return (parent->right);
}
else
{
return (parent->left);
}
}
