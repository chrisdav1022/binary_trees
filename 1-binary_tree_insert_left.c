#include "binary_trees.h"

/**
 * binary_tree_node - enter the left node
 * @parent: pointer to parent the new node
 * @value: value to new node
 * Return: return my node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *mynode;


	if (!mynode, !parent)
		return (NULL);

	mynode->n = value;
	mynode->parent = parent;
	mynode->left = NULL;
	mynode->right = NULL;

	if (parent->left != NULL)
	{
		mynode->left = parent->left;
		parent->left->parent = mynode;
	}
	parent->left = mynode;
	return (mynode);
}
