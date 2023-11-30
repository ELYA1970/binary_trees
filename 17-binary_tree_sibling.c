#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of node in binary tree
 * @node: pointer to the node to find the sibling of
 * Return: If NULL or no sibling - NULL Otherwise pointer to sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !(node->parent))
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);

	return (node->parent->left);
}