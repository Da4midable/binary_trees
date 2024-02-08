#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_rotate_right - Performs a right rotation on a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: A pointer to the new root node of the tree.
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *node;

	if (!tree || !tree->left)
		return (NULL);


	node = tree->left;
	tree->left = node->right;

	if (node->right)
	{
		node->right->parent = tree;
	}

	node->right = tree;

	node->parent = tree->parent;
	tree->parent = node;

	return (node);
}
