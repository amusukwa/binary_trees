#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_height - Calculate the height of a binary tree.
 * @tree: A pointer to the root node of the tree to calculate the height of.
 *
 * Return: The height of the binary tree.
 */


size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree)
	{
		left = binary_tree_height(tree->left);
		right = binary_tree_height(tree->right);
		return (1 + (left > right ? left : right));
	}
	return (0);
}


/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	if (left_height == right_height)
	{
		if (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right))
			return (1);
	}

	return (0);
}
