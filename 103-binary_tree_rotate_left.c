#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_rotate_left - Performs a left rotation on a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: A pointer to the new root node of the tree.
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *node;

	if (!tree || !tree->right)
		return (tree);

	node = tree->right;

	tree->right = node->left;
	if (node->left)
	{
		node->left->parent = tree;
	}

	node->left = tree;

	node->parent = tree->parent;


	tree->parent = node;

	return (node);
}
