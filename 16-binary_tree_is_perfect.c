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
 * binary_tree_is_perfect - blabla
 *
 * @tree: abc
 *
 * Return: xyz
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_h, right_h;
	int left, right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	left_h = tree_height(tree->left);
	right_h = tree_height(tree->right);
	if (left_h != right_h)
		return (0);
	left =  binary_tree_is_perfect(tree->left);
	right = binary_tree_is_perfect(tree->right);
	if (left == 1 && right == 1)
		return (1);
	return (0);
}
