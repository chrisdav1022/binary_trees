#include "binary_trees.h"

/**
 * binary_tree_node - create a node
 * @parent: pointer to parent the new node
 * @value: value to new node
 * Return: return my node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *mynode;

	mynode = malloc(sizeof(binary_tree_t));

	if (!mynode)
		return (NULL);

	mynode->n = value;
	mynode->parent = parent;
	mynode->left = NULL;
	mynode->right = NULL;

	return (mynode);
}
