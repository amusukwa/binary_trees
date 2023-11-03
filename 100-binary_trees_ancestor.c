#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: If common ancestors return the pointer to ancestor else return NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *p_1, *p_2;

	if (!first || !second)
	{
		return (NULL);
	}
	if (first == second)
	{
		return ((binary_tree_t *)first);
	}

	p_1 = first->parent, p_2 = second->parent;
	if (first == p_2 || !p_1 || (!p_1->parent && p_2))
	{
		return (binary_trees_ancestor(first, p_2));
	}
	else if (p_1 == second || !p_2 || (!p_2->parent && p_1))
	{
		return (binary_trees_ancestor(p_1, second));
	}
	return (binary_trees_ancestor(p_1, p_2));
}
