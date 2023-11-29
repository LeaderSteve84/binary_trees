#include "binary_trees.h"

/**
 * binary_tree_inorder - Function transverses the list 
 *						using in-order transversal
 * @tree: The tree to be transversed
 * @func: Function pointer
 * Return: Nothing
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
