#include "binary_trees.h"

/**
 * binary_tree_insert_right - blabla
 *
 * @parent: abc
 * @value: def
 *
 * Return: xyz
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	binary_tree_t *old = NULL;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		old = parent->right;
		old->parent = new;
		new->right = old;
	}
	parent->right = new;
	return (new);
}
