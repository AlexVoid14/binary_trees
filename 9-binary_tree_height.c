#include "binary_trees.h"

/**
 * binary_tree_height - 'Function that measures the height of a binary tree'
 *
 * @tree:- pointer to the root node of the tree
 *
 * Return: Height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (tree == NULL)
		return (0);

	const binary_tree_t *current_level[LIMIT];

	current_level[0] = tree;
	size_t level_size = 1;

	while (level_size > 0)
	{
		const binary_tree_t *next_level[LIMIT];
		size_t next_level_index = 0;

		for (size_t i = 0; i < level_size; i++)
		{
			const binary_tree_t *node = current_level[i];

			if (node->left != NULL)
				next_level[next_level_index++] = node->left;
			if (node->right != NULL)
				next_level[next_level_index++] = node->right;
		}

		if (next_level_index == 0)
			break;

		height++;
		level_size = next_level_index;
		for (size_t i = 0; i < level_size; i++)
			current_level[i] = next_level[i];
	}

	return (height);
}
