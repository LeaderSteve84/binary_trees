#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of
 * a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: An int
 * If tree is NULL, your function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);
	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return ((left_height > right_height) ? 1 : right_height);
}
