#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: pointer to the second node
 *
 * Return: Pointer to the lowest common ancestor (On success),
 *			otherwise NULL.
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *ptr;

	if (!first || !second)
		return (NULL);
	ptr = (binary_tree_t *)second;
	while (first != NULL)
	{
		while (second != NULL)
		{
			if (second == first)
				return ((binary_tree_t *)second);
			second = second->parent;
		}
		second = ptr;
		first = first->parent;
	}

	return (NULL);
}
