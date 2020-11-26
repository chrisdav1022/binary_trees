#include "binary_trees.h"

/**
 * binary_tree_node - enter the left node
 * @parent: pointer to parent the new node
 * @value: value to new node
 * Return: return my node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *lnode;

	if (!parent)
		return(NULL);

	lnode = malloc(sizeof(binary_tree_t));

	if (!lnode)
		return (NULL);

	lnode->n = value;
	lnode->parent = parent;
	lnode->left = NULL;
	lnode->right = NULL;

	if (parent->left != NULL)
	{
		lnode->left = parent->left;
		parent->left->parent = lnode;
	}
	parent->left = lnode;
	return (lnode);
}
