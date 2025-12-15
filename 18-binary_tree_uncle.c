#include "binary_trees.h"

/**
 * binary_tree_uncle - blabla
 *
 * @node: abc
 *
 * Return: xyz
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grand_pa, *left, *right;

	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	parent = node->parent;
	if (parent->parent == NULL)
		return (NULL);
	grand_pa = parent->parent;
	left = grand_pa->left;
	right = grand_pa->right;
	if (parent == left)
		return (right);
	return (left);
}
