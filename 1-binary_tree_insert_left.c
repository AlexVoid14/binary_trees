#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function to insert node as the left child
 *
 * @parent:- pointer to node to insert the left child in
 * @value:- value to store in the new node
 * Return: Pointer to new creted node || NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *root = malloc(sizeof(binary_tree_t));
	if (root == NULL || parent == NULL)
		return (NULL);

	root->parent = parent;
	root->left = parent->left;
	root->right = NULL;
	root->n = value;

	if (parent->left != NULL)
		parent->left->parent = root;

	parent->left = root;

	return (root);
}

