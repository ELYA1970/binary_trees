#include "binary_trees.h"

/**
 * binary_tree_node - creating a child node on the Binary_Tree
 * @parent: parent node
 * @value: value of the new node
 * Return: ponter to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *leaf;

	leaf = malloc(sizeof(binary_tree_t));
	if (!leaf)
		return (NULL);
	leaf->n = value;
	leaf->parent = parent;
	leaf->right = NULL;
	leaf->left = NULL;
	return (leaf);
}