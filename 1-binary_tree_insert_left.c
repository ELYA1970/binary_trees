#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as a left-child
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: If parent is NULL or an error occurs - NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *n;

	if (!parent)
		return (NULL);

	n = binary_tree_node(parent, value);

	if (!n)
		return (NULL);

	if (parent->left)
	{
		n->left = parent->left;
		parent->left->parent = n;
	}
	parent->left = n;

	return (n);
}