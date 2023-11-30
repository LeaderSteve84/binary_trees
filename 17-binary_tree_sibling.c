#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree
 * @node: Pointer to the node whose sibling is to be found
 *
 * Return: Pointer to the node of the sibling (on success),
 *			else NULL
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *ptr, *current;

	if (!node || node->parent == NULL)
		return (NULL);
	current = node;
	ptr = node->parent;
	if (ptr->left == current)
		return (ptr->right ? ptr->right : NULL);
	return (ptr->left ? ptr->left : NULL);
}
