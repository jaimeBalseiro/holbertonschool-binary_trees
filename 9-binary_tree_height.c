#include "binary_trees.h"

/**
 * binary_tree_height - get the height of tree
 * @tree: the tree to measure
 *Return: size_t height or 0
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh, rh;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);
	return ((lh > rh ? lh : rh) + 1);
}
