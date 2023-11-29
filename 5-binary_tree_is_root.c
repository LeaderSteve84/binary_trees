#include "binary_trees.h"

/**
 * binary_tree_is_root - Function checks if a given node is a root
 * @node: Node to be checked
 *
 * Return: 1 if true, otherwise 0
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent)
		return (0);
	else
		return (1);
}
