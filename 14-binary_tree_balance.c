#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: left and right
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int r, l;

	if (!tree)
		return (0);

	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);

	if (tree->left)
		l++;
	if (tree->right)
		r++;
	return (l - r);
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
