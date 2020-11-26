#include "binary_trees.h"

/**
 * binary_tree_preorder - binary tree pre-order
 * @tree: pointer to root node
 * @func: pointer to functioon to call node
 * Return: none
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
