#include "binary_trees.h"

/**
 * binary_tree_insert_right - Function to insert node as the right child
 *
 * @parent:- pointer to node to insert the left child in
 * @value:- value to store in the new node
 * Return: Pointer to new creted node || NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	inary_tree_t *root = malloc(sizeof(binary_tree_t));
	if (root == NULL || parent == NULL)
		return (NULL);

	root->parent = parent;
	root->left = NULL;
	root->right = parent->right;
	root->n = value;

	if (parent->left != NULL)
		parent->right->parent = root;

	parent->right = root;

	return (root);
}
