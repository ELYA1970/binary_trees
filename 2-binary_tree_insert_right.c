#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as the right-child
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: If parent is NULL or an error occurs - NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n;

	if (!parent)
		return (NULL);

	n = binary_tree_node(parent, value);
	if (!n)
		return (NULL);

	if (parent->right)
	{
		n->right = parent->right;
		parent->right->parent = n;
	}
	parent->right = n;

	return (n);
}