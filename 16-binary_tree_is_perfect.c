#include "binary_trees.h"

/**
 * binary_tree_is_perfect- is tree perfect?  all interior nodes have two
 * children and all leaves have the same depth or same level
 * @tree: the tree
 * Return: 1 if true, 0 if false
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
		return (0);
	if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
		return (1);
	return (0);
}

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
