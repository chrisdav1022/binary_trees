#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is perfect or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
		return (1);
	return (0);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: the heigth in binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_me = 0, right_me = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	left_me = binary_tree_height(tree->left);
	right_me = binary_tree_height(tree->right);

	if (left_me > right_me)
		return (left_me + 1);
	return (right_me + 1);
}
