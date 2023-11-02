#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverse the binary tree in Post-order (LRN)
 *
 * @tree: Pointer to the tree node.
 * @func: A pointer to a function.
 *
 * Return: Nothing.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
