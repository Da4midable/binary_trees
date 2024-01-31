#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a node in a binary tree.
 *
 * @tree: Pointer to the node for which to find the size.
 *
 * Return: Size of the node, 0 if @tree is NULL or has no parent.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{

	return (tree ? 1 + binary_tree_size(tree->left)
			+ binary_tree_size(tree->right) : 0);
}
