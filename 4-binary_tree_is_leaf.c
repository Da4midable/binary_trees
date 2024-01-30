#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_leaf - Checks if a node in a binary tree is a leaf.
 * @node: Pointer to the node to check.
 *
 * Return: 1 if the node is a leaf, 0 otherwise or if node is NULL.
 *
 * This function determines whether a given node in a binary tree is a leaf
 * (i.e., has no left or right children). If the input node is NULL or if it
 * has no children, the function returns 1, indicating that the node is a leaf.
 * Otherwise, it returns 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (!node->left && !node->right)
		return (1);

	return (0);
}
