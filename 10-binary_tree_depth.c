#include "binary_trees.h"

/**
 * binary_tree_depth - count depth of tree
 * @tree: the tree
 *
 * Return: size_t depth or 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!(tree && tree->parent))
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}
