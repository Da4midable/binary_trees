#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t is_left = 0, is_right = 0;

		is_left = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		is_right = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((is_left > is_right) ? is_left : is_right);
	}
	return (0);
}


/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 *
 * @tree: A pointer to the root node of the tree.
 *
 * Return: Balance factor (height of left subtree - height of right subtree),
 *         or 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}
