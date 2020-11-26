#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: return nodes left + rigth
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int l_nodes, r_nodes;

	if (!tree)
		return (0);

	l_nodes = binary_tree_nodes(tree->left);
	r_nodes = binary_tree_nodes(tree->right);

	if (tree->left || tree->right)
		return (1 + l_nodes + r_nodes);
	return (l_nodes + r_nodes);
}
