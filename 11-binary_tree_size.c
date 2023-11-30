#include "binary_trees.h"
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
