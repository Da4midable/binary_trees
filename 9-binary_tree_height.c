#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: Height of the binary tree, 0 if tree is NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t i = 0;

	if (!tree)
	{
		return (0);
	}


	if (tree->left)
	{
		i++;
		binary_tree_height(tree->left);
	}

	if (tree->right)
	{
		i++;
		binary_tree_height(tree->right);
	}
	return (i);
}
