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
	if (!tree)
		return (0);
	return (helper(tree));
}

/**
 * helper - Helps to measure the height of a binary tree
 * @tree: The binary tree
 *
 * Return: The height
*/
size_t helper(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);
	left_height = 1 + helper(tree->left);
	right_height = 1 + helper(tree->right);

	return ((left_height > right_height) ? left_height : right_height);
}
/**
 * binary_tree_balance - function that measures the balance
 * factor of a binary tree
 * @tree: pointer to the root node of the tree
 * to measure the balance factor
 * Return: An int
 * If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = (int)binary_tree_height(tree->left);
	right_height = (int)binary_tree_height(tree->right);

	return (left_height - right_height);
}
