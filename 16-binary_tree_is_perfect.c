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
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to the root node of
 * the tree to measure the size
 * Return: An int
 * If tree is NULL, the function must return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_left_subtree, size_right_subtree;

	if (tree == NULL)
		return (0);
	size_left_subtree = binary_tree_size(tree->left);
	size_right_subtree = binary_tree_size(tree->right);
	return (size_left_subtree + 1 + size_right_subtree);
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: an int
 * If tree is NULL, your function must return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, size;

	height = (int)binary_tree_height(tree);
	size = (int)binary_tree_size(tree);

	return (size == (1 << height) - 1);
}
