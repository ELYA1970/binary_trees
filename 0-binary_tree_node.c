#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: pointer to the parent of the node to create
 * @value: value to put in the new node
 * Return: If an error occurs - NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *n = malloc(sizeof(binary_tree_t));

	if (!n)
		return (NULL);

	n->n = value;
	n->parent = parent;
	n->left = NULL;
	n->right = NULL;

	return (n);
}