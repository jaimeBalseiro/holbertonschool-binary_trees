#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: * to thee parent of the node to create
 * @value: the value to add at the node
 *
 * Return: * to the new node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = calloc(1, sizeof(binary_tree_t));

	if (!node)
		return (NULL);

	node->parent = parent;
	node->n = value;
	return (node);
}
