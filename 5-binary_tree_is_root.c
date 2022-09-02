#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if node is root
 * @node: the node we're checing
 *
 * Return: 1 if root otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	return (!(node->parent));
}
