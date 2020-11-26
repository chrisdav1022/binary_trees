#include "binary_trees.h"

/**
 * binary_tree_delete - delete binary tree
 * @tree: delete to binary tree
 * Return: return my node
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
