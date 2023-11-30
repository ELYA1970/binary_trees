#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts leaves in binary tree
 * @tree: pointer to the root node of the tree to count the leaves of
 * Return: number of leaves in the tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l = 0;

	if (tree != NULL)
	{
		l += (!tree->left && !tree->right) ? 1 : 0;
		l += binary_tree_leaves(tree->left);
		l += binary_tree_leaves(tree->right);
	}

	return (l);
}