#include "binary_trees.h"

/**
 * binary_tree_sibling- find a sibling of a node
 * @node: the node
 * Return: ptr to sibling or NULL
 *
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return (node->parent->left ==
			node ? node->parent->right : node->parent->left);
}

/**
 * binary_tree_uncle- find the uncle of a node
 * @node: ptr to node
 * Return: ptr to uncle or NULL
 *
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
