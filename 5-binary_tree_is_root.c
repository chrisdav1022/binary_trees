#include "binary_trees.h"

/**
 * binary_tree_is_root - verify if binary tree is root
 * @node: pointer to node to check
 * Return: return my node
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->parent)
		return (1);
	return (0);
}
