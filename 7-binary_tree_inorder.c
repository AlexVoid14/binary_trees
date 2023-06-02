#include "binary_trees.h"

/**
 * binary_tree_inorder - 'Function that uses in-order traversal'
 *
 * @tree:- pointer to the root node of the tree
 * @func:- pointer to function calling each node
 *
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}

