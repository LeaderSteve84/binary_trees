#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: The pointer to the node whose uncle we are to find
 *
 * Return: The uncle node on Success, otherwise NULL
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *ptr, *current;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	current = node->parent;
	ptr = node->parent->parent;
	if (ptr->left == current)
		return (ptr->right ? ptr->right : NULL);
	return (ptr->left ? ptr->left : NULL);
}
