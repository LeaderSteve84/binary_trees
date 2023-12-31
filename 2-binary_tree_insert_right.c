#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that inserts a
 * node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to the created node, or
 * NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	else if (parent != NULL && parent->right == NULL)
	{
		new_node = malloc(sizeof(binary_tree_t));
		if (new_node == NULL)
		{
			return (NULL);
		}
		else
		parent->right = new_node;
		new_node->n = value;
		new_node->parent = parent;
		new_node->right = NULL;
		new_node->left = NULL;

		return (new_node);
	}
	else
	{
		new_node = malloc(sizeof(binary_tree_t));
		if (new_node == NULL)
		{
			return (NULL);
		}
		else
		{
			new_node->n = value;
			new_node->right = parent->right;
			new_node->parent = parent;
			parent->right = new_node;
			new_node->right->parent = new_node;
			new_node->left = NULL;

			return (new_node);
		}
	}
}
