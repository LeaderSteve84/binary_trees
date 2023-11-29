#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: The binary tree
 *
 * Return: The size (int), otherwise 0 on error
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	const binary_tree_t *ptr;
	size_t ret = 1;

	if (!tree)
		return (0);
	if (!tree->parent)
		ret++;
	ptr = tree->left;
	while (ptr)
	{
		ret++;
		ptr = ptr->left;
	}
	ptr = tree->right;
	while (ptr)
	{
		ret++;
		ptr = ptr->right;
	}
	return (ret);
}
