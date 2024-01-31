#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least one child in a binary tree.
 *
 * @tree: Pointer to the root node of the tree.
 *
 * Return: Number of nodes with at least one child, 0 if @tree is NULL.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (tree->left || tree->right ? 1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) : 0);
}
