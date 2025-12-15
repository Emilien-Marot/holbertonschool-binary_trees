#include "binary_trees.h"

/**
 * binary_tree_height - blabla
 *
 * @tree: abc
 *
 * Return: xyz
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		left = 1 + binary_tree_height(tree->left);
	else
		left = 0;
	if (tree->right != NULL)
		right = 1 + binary_tree_height(tree->right);
	else
		right = 0;
	if (left > right)
		return (left);
	return (right);
}
