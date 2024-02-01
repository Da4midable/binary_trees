#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds and returns uncle of node in binary tree.
 *
 * @node: Pointer to the node for which to find the uncle
 *
 * Return: Pointer to uncle node, or NULL if node has no uncle or is NULL.
 */


binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent->parent)
		return (NULL);

	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);

	if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);

	return (NULL);
}
