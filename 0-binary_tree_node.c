#include <stdlib.h>
#include "binary_trees.h"

/**
 * *binary_tree_node - Function pointer to create a binary tree node
 *
 * @parent: parent node
 * @value: integer value of node
 *
 * Return: Pointer to the new node || NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
        binary_tree_t *root = malloc(sizeof(binary_tree_t));
        if (!root)
                return NULL;

        root->parent = parent;
        root->left = NULL;
        root->right = NULL;
        root->n = value;

        return (root);
}
