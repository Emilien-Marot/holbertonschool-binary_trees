#include "binary_trees.h"

/**
 * binary_tree_depth - blabla
 *
 * @tree: abc
 *
 * Return: xyz
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);
	if (tree->parent != NULL)
		depth = 1 + binary_tree_depth(tree->parent);
	else
		depth = 0;
	return (depth);
}
