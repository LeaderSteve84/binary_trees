#include "binary_trees.h"

/**
 * binary_tree_depth - Measures a node's depth in the binary tree
 * @tree: The binary tree
 *
 * Return:The depth (int), otherwise 0 if an error occurs
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *ptr;
	size_t ret = 0;

	if (!tree)
		return (0);
	ptr = tree->parent;
	while (ptr)
	{
		ret++;
		ptr = ptr->parent;
	}
	return (ret);
}
