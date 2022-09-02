#include "binary_trees.h"

/**
 * binary_tree_insert_right - add node as right child
 * @parent: the parent of the node
 * @value: the value to put
 *
 * Return: * to the new node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = calloc(1, sizeof(binary_tree_t));

	if (!node)
		return (NULL);

	node->n = value;
	node->parent = parent;
	if (parent->right)
	{
		node->right = parent->right;
		node->right->parent = node;
	}
	parent->right = node;
	return (node);
}
