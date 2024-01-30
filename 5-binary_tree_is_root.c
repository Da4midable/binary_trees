#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_root - Checks if a node in a binary tree is a root.
 * @node: Pointer to the node to check.
 *
 * Return: 1 if the node is a root, 0 otherwise or if node is NULL.
 *
 * This function determines whether a given node in a binary tree is a root
 * (i.e., has no parent and has at least one child). If the input node is NULL
 * or if it is not a root, the function returns 0; otherwise, it returns 1.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	return (!node->parent && (node->left || node->right));
}
