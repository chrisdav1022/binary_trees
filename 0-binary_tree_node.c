#include "binary_trees.h"
/**
 *
 *
 *
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (node == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	return (node);

}
