#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: The binary tree
 *
 * Return: The size (int), otherwise 0 on error
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (size_helper(tree));
}

/**
 * size_helper - Helps the binary_tree_size function to measure
 *				the size of a binary tree
 * @tree: The binary tree
 * Return: The size
*/
size_t size_helper(const binary_tree_t *tree)
{
	size_t left, right, ret = 0;

	if (tree->parent == NULL)
		ret = 1;
	left = 1 + binary_tree_size(tree->left);
	right = 1 + binary_tree_size(tree->right);

	if ((left + right) % 2 == 0)
		ret += ((left + right) / 2);
	else
		ret += (left + right);
	return (ret);
}
