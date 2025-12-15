#include "binary_trees.h"

/**
 * tree_height - blabla
 *
 * @tree: abc
 *
 * Return: xyz
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		left = 1 + tree_height(tree->left);
	else
		left = 1;
	if (tree->right != NULL)
		right = 1 + tree_height(tree->right);
	else
		right = 1;
	if (left > right)
		return (left);
	return (right);
}

/**
 * binary_tree_balance - blabla
 *
 * @tree: abc
 *
 * Return: xyz
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);
	size += tree_height(tree->left);
	size -= tree_height(tree->right);
	return (size);
}
