#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is a leaf
 * @node: Pointer to the tree node.
 *
 * Return: 1 if the node is a root, otherwise 0.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node->parent == NULL)
	{
		return (1);
	}
	return (0);
}
