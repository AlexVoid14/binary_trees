#include "binary_trees.h"

/**
 * binary_tree_nodes - Function to cout nodes with at least one child in tree
 *
 * @tree:- pointer to the root node
 *
 * Return: Count of nodes with child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return 0;

	if (tree->left == NULL && tree->right == NULL)
		return 0;

	size_t left_nodes = binary_tree_nodes(tree->left);
	size_t right_nodes = binary_tree_nodes(tree->right);

	return (left_nodes + right_nodes + 1);
}
