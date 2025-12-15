#include "binary_trees.h"

/**
 * binary_tree_sibling - blabla
 *
 * @node: abc
 *
 * Return: xyz
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent, *left, *right;

	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	parent = node->parent;
	left = parent->left;
	right = parent->right;
	if (node == left)
		return (right);
	return (left);
}
