#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: leaves left and rigth
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int l_leaves, rleaves;

	if (!tree)
		return (0);

	l_leaves = binary_tree_leaves(tree->left);
	rleaves = binary_tree_leaves(tree->right);

	if (!tree->left && !tree->right)
		return (1 + l_leaves + rleaves);
	return (l_leaves + rleaves);
}
