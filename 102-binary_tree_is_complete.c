#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>



int is_complete_recursive(const binary_tree_t *tree,
							 size_t index, size_t nodes);

/**
 * binary_tree_is_complete - Checks if a binary tree is complete.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: 1 if the tree is complete, 0 otherwise.
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (is_complete_recursive(tree, 0, binary_tree_size(tree)));
}

/**
 * is_complete_recursive - Checks if a binary tree is complete recursively.
 * @tree: A pointer to the root node of the tree.
 * @index: The index of the current node (starting from 0).
 * @nodes: The total number of nodes in the tree.
 *
 * Return: 1 if the tree is complete, 0 otherwise.
 */
int is_complete_recursive(const binary_tree_t *tree,
							size_t index, size_t nodes)
{
	if (!tree)
		return (1);

	if (index >= nodes)
		return (0);

	return (is_complete_recursive(tree->left, 2 * index + 1, nodes) &&
			is_complete_recursive(tree->right, 2 * index + 2, nodes));
}

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
