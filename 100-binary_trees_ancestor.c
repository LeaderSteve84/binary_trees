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
	binary_tree_t *ptr1, *ptr2;

	if (!first || !second)
		return (NULL);
	if (first->parent && second->parent == NULL)
		return (first->parent);
	else if (second->parent && first->parent == NULL)
		return (second->parent);
	else if (first->parent == second->parent)
		return (first->parent);
	else if (second->parent == NULL && first->parent == NULL)
		return (NULL);
	ptr1 = first->parent;
	ptr2 = second->parent;
	return (ptr1->n > ptr2->n ? ptr2 : ptr1);
}
