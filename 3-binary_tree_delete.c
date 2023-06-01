#include "binary_trees.h"

/**
 * binary_tree_delete - Function to delete entire tree
 *
 * @tree:- Pointer to the root node of the tree to delete
 *
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *root;

	root = malloc(sizeof(binary_tree_t));
	if (root != NULL)
		root = tree;
	else
		return;
}

