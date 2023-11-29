#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that inserts a
 * node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to the created node, or
 * NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	else if (parent != NULL && parent->left == NULL)
	{
		new_node = malloc(sizeof(binary_tree_t));
		if (new_node == NULL)
		{
			return (NULL);
		}
		else
		parent->left = new_node;
		new_node->n = value;
		new_node->parent = parent;
		new_node->left = NULL;
		new_node->right = NULL;

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
			new_node->left = parent->left;
			new_node->parent = parent;
			parent->left = new_node;
			new_node->left->parent = new_node;
			new_node->right = NULL;

			return (new_node);
		}
	}
}
