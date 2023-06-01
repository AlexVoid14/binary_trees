#include "binary_trees.h"

/**
 * binary_tree_depth - 'Function that measures the depth of a binary tree'
 *
 * @tree:- pointer to the root node of the tree
 *
 * Return: Depth of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t depth = 0;

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}

