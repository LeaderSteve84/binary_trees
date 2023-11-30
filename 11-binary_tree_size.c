#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: The binary tree
 *
 * Return: The size (int), otherwise 0 on error
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t ret, ret2, add = 0;

	if (!tree)
		return (0);
	if (tree->parent == NULL)
		add = 2;
	ret = 1 + binary_tree_size(tree->left);
	ret2 = 1 + binary_tree_size(tree->right);

	return ((ret > ret2) ? ret : ret2 + add);
}
